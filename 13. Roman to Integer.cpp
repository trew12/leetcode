/*
Given a roman numeral, convert it to an integer.
*/
class Solution {
public:
    map<char, int> symbolToInt = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int romanToInt(string s) {
        int res = 0;
        for(int i = 0; i < s.size(); i++){
            if (s.size() - i == 1 ){
                res += symbolToInt[s[i]];
            }
            else{
                int cur = symbolToInt[s[i]];
                int next = symbolToInt[s[i + 1]];
                if (cur >= next) {
                    res += cur;
                }
                else{
                    res += next - cur;
                    i++;
                }
            }
        }
        return res;
    }  
};
