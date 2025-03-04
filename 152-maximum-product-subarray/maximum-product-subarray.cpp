class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size = nums.size();
        int maxprod = nums[0];
        int minprod = nums[0];
        int prod = nums[0];
        for(int i = 1; i<size; i++){
            if(nums[i]<0){
                swap(prod, minprod);
            }
             
            prod = max(nums[i], prod*nums[i]);
             minprod = min(nums[i], minprod * nums[i]);
            maxprod = max(maxprod, prod);
        }
        return maxprod;
    }
};