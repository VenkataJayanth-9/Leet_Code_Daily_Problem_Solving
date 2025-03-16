class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>array;
        for(int i = 0; i<numRows; i++){
            int size = i+1;
            vector<int>arr(size);
            for(int j = 0; j<size; j++){
                if(j == 0 || j == size-1){
                    arr[j] = 1;
                } 
                else{
                    arr[j] = array[i - 1][j - 1] + array[i - 1][j];
                }
            }
            array.push_back(arr);
        }
        return array;
    }
};