class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> hmap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int length = s.length();
        int sum = 0;
        for(int i = 0; i<length; i++){
            if(i+1<length && hmap[s[i]]<hmap[s[i+1]]){
                sum -=hmap[s[i]];
            }else{
                sum += hmap[s[i]];
            }
        }
        return sum;
    }
};