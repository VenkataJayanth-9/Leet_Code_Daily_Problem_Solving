class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>hp;
        for(int i = 0; i<nums.size(); i++){
            int comp = target-nums[i];
            if(hp.find(comp)!=hp.end()){
                return {hp[comp]+1, i+1};
            }
            hp[nums[i]] = i;
        }
        return {};
    }
};