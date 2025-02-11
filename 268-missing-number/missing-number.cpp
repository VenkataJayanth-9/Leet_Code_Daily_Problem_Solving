class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int, bool> hashmap;
        
        for(int i:nums){
            hashmap[i] = true;
        }
        for(int i = 0; i<=size; i++){
            if(hashmap.find(i) == hashmap.end()){
                return i;
            }
        }
        return -1;
    }
};