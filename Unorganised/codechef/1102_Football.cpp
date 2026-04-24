#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> goals;
    for (int e = 0; e < t; e++)
    {
        int n;
        cin >> n;
        goals.reserve(n);

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            goals.push_back(a);
        }
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            mx = max(mx, (20 * goals[i]) - (10 * b));
        }
        cout << mx << endl;
        goals.clear();
    }
}
