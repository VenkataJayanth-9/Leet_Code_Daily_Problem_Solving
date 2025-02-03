class Solution {
public:
    bool check(vector<int>& nums) {

        int count = 0;
        int size = nums.size();
        
        for(int i = 0; i < size; i++){
            if(nums[i] > nums[(i + 1) % size]) {
                count++;
            }
        }
        
        return count <= 1; 

    }
};