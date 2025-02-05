class Solution {
public:
    int Ssum(int n){
        int sum = 0;
        while(n>0){
            int digits = n%10;
            sum += digits*digits;
            n = n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        vector<int> array;
        while(n!=1){
            if(find(array.begin(), array.end(), n) != array.end()){
                return false;
            }
            array.push_back(n);
            n = Ssum(n);
        }
        return true;
    }
};