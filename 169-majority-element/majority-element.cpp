class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int num:nums){
            map[num]++;
        }
        int maxCount = 0;
        int majority = 0;
        for(auto& i : map){
            if(i.second>maxCount){
                maxCount = i.second;
                majority = i.first;
            }
        }
        return majority;
    }
};