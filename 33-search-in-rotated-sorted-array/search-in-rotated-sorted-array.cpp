class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int, int>hp;
        for(int i = 0; i<nums.size(); i++){
            hp[nums[i]] = i;
        }
        for(auto j : hp){
            if(j.first == target){
                return j.second;
            }
        }
        return -1;
    }
};