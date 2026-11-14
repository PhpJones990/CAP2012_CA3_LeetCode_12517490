class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> nextGreater; 
        stack<int> monotonic; 

        for (int num : nums2) 
        {
            while ((!monotonic.empty()) && num > monotonic.top()) 
            {
                nextGreater[monotonic.top()] = num; 
                monotonic.pop(); 
            }
            monotonic.push(num); 
        } 

        vector<int> result(nums1.size(), -1); 
        for (int i = 0; i < nums1.size(); i++) 
        {
            if (nextGreater.count(nums1[i])) 
            {
                result[i] = nextGreater[nums1[i]]; 
            }
        }

        return result; 
    }
};