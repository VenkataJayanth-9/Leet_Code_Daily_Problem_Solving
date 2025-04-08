    class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            vector<vector<int>>array;
            sort(nums.begin(), nums.end());

            for(int i = 0; i<nums.size(); i++){
                if(i>0 && nums[i] == nums[i-1]) continue;
                int j = i+1;
                int z = nums.size()-1;
                while(j<z){
                    int sum = nums[i]+nums[j]+nums[z];
                    if(sum == 0){
                        array.push_back({nums[i], nums[j], nums[z]});
                        while(j<z && nums[j] == nums[j+1]) j++;
                        while(j<z && nums[z] == nums[z-1]) z--;
                        j++;
                        z--;
                    }
                    else if(sum<0){
                        j++;
                    }
                    else{
                        z--;
                    }
                }
            }
            return array;
        }
    };