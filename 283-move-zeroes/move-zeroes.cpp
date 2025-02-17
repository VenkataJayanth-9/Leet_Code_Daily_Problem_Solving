class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        for(int i = 0; i<size; i++){
            if(nums[i] == 0){
                count++;
            }
        }
        while(count!=0){
            for(int i = 0; i<size-1; i++){
                
                if(nums[i] == 0){
                    int temp = nums[i];
                    nums[i] = nums[i+1];
                    nums[i+1] = temp;
                }
            }
            count--;
        }
    }
};