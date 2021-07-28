/*
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^(31 - 1)], then return 0.
*/
class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        std::reverse(s.begin(), s.end());
        try {
            return x < 0? -1*stoi(s): stoi(s);
        }
        catch(out_of_range& e){
            return 0;
        }
    }
};
