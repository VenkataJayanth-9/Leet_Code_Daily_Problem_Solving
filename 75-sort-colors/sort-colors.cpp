class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int>hmap;
        for(int i:nums){
            hmap[i]++;
        }
        int index = 0;
        for(int c = 0; c<=2; c++){
            while(hmap[c] > 0){
                nums[index++] = c;
                hmap[c]--;
            }
        }
    }
};