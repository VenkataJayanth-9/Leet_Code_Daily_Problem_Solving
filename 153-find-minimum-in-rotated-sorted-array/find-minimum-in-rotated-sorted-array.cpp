class Solution {
public:
    int findMin(vector<int>& nums) {
        int size = nums.size();
        int left = 0;
        int right = size-1;
        int min = nums[0];
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]<min){
                min = nums[mid];
            }else if(nums[left]<=nums[mid]){
                if(nums[left]<min && min<=nums[mid]){
                    right = mid-1;
                }else{
                    left = mid+1;
                }
            }else{
                if(min>nums[mid] && min<=nums[right]){
                    left = mid+1;
                }else{
                    right = mid-1;
                }
            }
        }
        return min;
    }
};