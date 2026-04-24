#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> largeGroupPositions(string s)
    {
        vector<vector<int>> res;
        char last = s[0];
        uint16_t count = 0;
        uint16_t n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == last)
            {
                count++;
                continue;
            }
            else
            {
                if (count >= 3)
                    res.push_back({i - count, i - 1});

                last = s[i];
                count = 1;
            }
        }
            if (count >= 3)
                res.push_back({n - count, n - 1});
        return res;
    }
};