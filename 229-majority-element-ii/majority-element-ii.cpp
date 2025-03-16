class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cond = n/3;
        vector<int>arr;
        unordered_map<int, int> st;
        for(int i : nums){
            st[i]++;
        }
        int freq = 0;
        for(auto j : st){
            freq = max(j.second, freq);
        }
        for(auto z : st){
            if(z.second>cond){
                arr.push_back(z.first);
            }
        }
        return arr;
    }
};