class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int>hashMap;
        for(int i : nums){
            hashMap[i]++;
        }
        for(auto l : hashMap){
            if(l.second != 2){
                return l.first;
            }
        }
        return -1;
    }
};