class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> array;
        int size = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < size - 3; i++) {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            for(int j = i + 1; j < size - 2; j++) {
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                int left = j + 1;
                int right = size - 1;
                while(left < right) {
                    long long sum = (long long)nums[left] + nums[right] + nums[i] + nums[j];
                    if(sum == target) {
                        array.push_back({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;
                        while(left < right && nums[left] == nums[left - 1]) left++; // Skip duplicates for left
                        while(left < right && nums[right] == nums[right + 1]) right--; // Skip duplicates for right
                    }
                    else if (sum < target) {
                        left++;
                    } 
                    else {
                        right--;
                    }
                }
            }
        }
        return array;
    }
};
