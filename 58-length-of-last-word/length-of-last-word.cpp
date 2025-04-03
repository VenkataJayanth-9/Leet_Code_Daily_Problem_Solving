class Solution {
public:
    int lengthOfLastWord(string s) {
        s.erase(0, s.find_first_not_of(' '));
        s.erase(s.find_last_not_of(' '));
        int len = s.length();
        int size = 0;

        for(char c : s){
            if(c == ' '){
                size = 0;
                continue;
            }
            size++;
        }
        return size+1;
    }
};