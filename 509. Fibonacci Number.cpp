/*
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, 
such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).
*/
class Solution {
public:
    int fib(int n) {
        if (n <= 1 ){
            return n;
        }   
        vector<int> res(n);
        res[0] = 1;
        res[1] = 1;
        for (int i = 2; i < n; i++){
            res[i] = res[i - 1] + res[i - 2];
        }
        return res[n - 1];
    }
};