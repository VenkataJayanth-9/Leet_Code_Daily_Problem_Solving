class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int>hp;
        for(int i : nums){
            hp[i]++;
        }
        for(auto j : hp){
            if(j.second > 1){
                return true;
            }
        }
        return false;
    }
};