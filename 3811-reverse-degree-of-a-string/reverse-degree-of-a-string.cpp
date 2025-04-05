class Solution {
public:
    int reverseDegree(string s) {
        int size = s.length();
        int count = 0;
        for(int i = 0; i<size; i++){
            count += (('z'-s[i]+1)*(i+1));
        }
        return count;
    }
};