#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        int divisor = 5;
        int zeroes = 0;
        while(n >= divisor) {
            zeroes += n / divisor;
            divisor *= 5;
        }
        return zeroes;
    }
};