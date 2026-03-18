#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char> s;
        s.reserve(jewels.size());
        for (auto a : jewels)
        {
            s.insert(a);
        }
        uint_fast8_t sum = 0;
        for (auto a : stones)
        {
            if (s.contains(a)) sum++;
        }
        return sum;
    }
};