#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        long long x;
        auto [_, ec] = from_chars(num.data(), num.data() + num.size(), x);
        if(ec != errc()) 
            return "";
        
        int z;
        while(x > 0) {
            z = x % 10;
            if(z % 2 == 1) {
                return to_string(x);
            }
            x = x / 10;
        }
        return "";
    }
};