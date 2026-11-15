class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length = nums.size(); 
        vector<int> result(length, 1); 

        int prefix = 1; 
        for (int i = 0; i < length; i++) 
        {
            result[i] = prefix; 
            prefix *= nums[i]; 
        } 

        int suffix = 1; 
        for (int i = length - 1; i >= 0; i--) 
        {
            result[i] *= suffix; 
            suffix *= nums[i]; 
        }

        return result; 
    }
};