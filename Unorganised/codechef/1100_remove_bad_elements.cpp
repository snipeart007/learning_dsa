#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    unordered_map<int, int> mp;
    for (int e = 0; e < t; e++)
    {
        int n;
        cin >> n;
        mp.reserve(n);
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }
        int max_value = 0;
        for (const auto &a : mp)
            max_value = max(max_value, a.second);
        cout << n - max_value << endl;
        mp.clear();
    }
}
