/*
Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward. 
For example, 121 is palindrome while 123 is not.
*/
class Solution {
public:
    bool isPalindrome(int x) {
    string s1 = to_string(x);
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    return s1 == s2;
    }
};
