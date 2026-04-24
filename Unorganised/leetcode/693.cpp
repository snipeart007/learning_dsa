#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool hasAlternatingBits(int n)
    {
        // number of bits
        int m = (int)(log2f(n)) + 1;

        bool current_bit = (n & 1) ? 1 : 0;
        for (int i = 1; i < m; i++)
        {
            if ((n & (1 << i)) != 0)
            {
                if (!current_bit)
                {
                    current_bit = !current_bit;
                    continue;
                }
                else {
                    return false;
                }
            }
            else if (!current_bit)
            {
                return false;
            }
            else {
                current_bit = !current_bit;
                continue;
            }
        }
        return true;
    }
};
