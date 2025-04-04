class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sl = s.length();
        int tl = t.length();
        int index = 0;
        int count = 0;
        for(int i = 0; i<sl; i++){
            for(int j = index; j<tl; j++){
                if(s[i] == t[j]){
                    count++;
                    index = j+1;
                    break;
                }
            }
        }
        return (sl == count);
    }
};