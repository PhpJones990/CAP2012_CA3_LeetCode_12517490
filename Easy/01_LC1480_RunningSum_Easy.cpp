class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result = {nums[0]}; 
        int sum = nums[0]; 
        size_t length = nums.size(); 

        for (size_t i = 1; i < length; i++) 
        {
            sum += nums[i]; 
            result.push_back(sum);  
        } 

        return result; 
    }
};