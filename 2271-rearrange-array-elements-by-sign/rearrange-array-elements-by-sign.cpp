class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos = 0;
        int neg = 1;
        int size = nums.size();
        vector<int> array(size, 0);
        for(int i = 0; i<size; i++){
            if(nums[i]>0){
                array[pos] = nums[i];
                pos += 2;
            }
            else{
                array[neg] = nums[i];
                neg += 2;
            }
        }
        return array;
    }
};