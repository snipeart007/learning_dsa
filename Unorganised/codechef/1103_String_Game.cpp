#include <bits/stdc++.h>

// #include <cstdint>
// #include <iostream>
// #include <bitset>
using namespace std;

int main()
{
    uint_fast16_t t;
    cin >> t;
    bitset<26> bs;
    for (uint_fast16_t e = 0; e < t; e++)
    {
        uint_fast32_t n;
        cin >> n;
        string s;
        s.reserve(n);

        cin >> s;

        if (n & 1)
        {
            cout << "NO" << endl;
            bs = 0;
            continue;
        }

        for (const char &c : s)
        {
            if (bs.test(c - 'a'))
                bs.reset(c - 'a');
            else
                bs.set(c - 'a');
        }
        if (bs.none())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        bs = 0;
    }
}
