#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        uint_fast8_t n = s.length();
        if(words.size() != n) return false;
        for(int i = 0; i < n; i++) {
            if(s[i] != words[i][0]) return false;
        }
        return true;
    }
};