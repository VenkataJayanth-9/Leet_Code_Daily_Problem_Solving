class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 1;
        int size = nums.size();
        for(int i= 1; i<size; i++){
            if(nums[i] != nums[i-1]){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};