class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>hmap;
        int size = nums.size();
        for(int i = 0; i<size; i++){
            int comp = target-nums[i];
            if(hmap.find(comp) != hmap.end()){
                return{hmap[comp], i};
            }
            hmap[nums[i]] = i;
        }
        return{};
    }
};