#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=2185 lang=cpp
 *
 * [2185] Counting Words With a Given Prefix
 */

// @lc code=start
class Solution
{
public:
    int prefixCount(vector<string> &words, string pref)
    {
        uint_fast8_t n = pref.size();

        int count = 0;
        for (const auto &word : words)
        {
            if (string_view(word).substr(0, n) == pref)
                count++;
        }
        return count;
    }
};
// @lc code=end
