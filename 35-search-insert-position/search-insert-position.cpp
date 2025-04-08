class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int index;
        for(int i = 0; i<size; i++){
            if(nums[i] >= target){
                return i;
                break;
            }
        }
        return size;
    }
};