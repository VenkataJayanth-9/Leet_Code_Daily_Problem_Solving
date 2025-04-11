class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int size = nums.size();
        vector<int>leftSum(size);
        vector<int>rightSum(size);

        for(int i=0; i<size; i++){
            if(i == 0){
                leftSum[i] = 0;
                continue;
            }
            int sum = 0;
            for(int j = 0; j<i; j++){
                sum += nums[j];
            }
            leftSum[i] = sum;
        }
        for(int i=0; i<size; i++){
            int sum = 0;
            for(int j = i+1; j<size; j++){
                sum += nums[j];
            }
            rightSum[i] = sum;
        }  
        for(int i = 0; i<size; i++){
            nums[i] = abs(leftSum[i]-rightSum[i]);
        }
        return nums;                    
    }
};