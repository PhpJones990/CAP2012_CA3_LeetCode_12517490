class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> track; 
        int max_area = 0; 
        
        heights.push_back(0); 

        for (int i = 0; i < heights.size(); i++) 
        {
            int current_height = heights[i]; 

            while (!track.empty() && current_height < heights[track.top()]) 
            {
                int height = heights[track.top()]; 
                track.pop(); 

                int left_boundary = track.empty() ? -1 : track.top(); 
                int width = i - left_boundary - 1; 

                max_area = max(max_area, height * width); 
            }
            track.push(i); 
        }
        heights.pop_back(); 
        return max_area; 
    }
};