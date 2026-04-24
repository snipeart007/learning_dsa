#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkOnesSegment(string s)
    {
        bool isOk = true;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (isOk)
            {
                if (s[i] == '1')
                    continue;
                else
                {
                    isOk = !isOk;
                    continue;
                }
            }
            else if (s[i] == '1')
            {
                return false;
            }
        }
        return true;
    }
};
