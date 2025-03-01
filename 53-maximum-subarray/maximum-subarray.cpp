class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int cursum = nums[0];
        for(int i = 1;i<nums.size(); i++){
            cursum = max(nums[i], cursum+nums[i]);
            maxsum = max(cursum, maxsum);
        }
        return maxsum;
    }
};