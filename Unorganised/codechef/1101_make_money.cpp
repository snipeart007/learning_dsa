#include <bits/stdc++.h>
using namespace std;

void handleTestcase()
{
    int n, x, c;
    cin >> n >> x >> c;

    int sum = 0;
    if (x <= c)
    {
        for (size_t i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            sum += ele;
        }
        goto forward;
    }
    for (size_t i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;

        if (ele < x - c)
            sum += x - c;
        else
            sum += ele;
    }
    forward:
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int e = 0; e < t; e++)
    {
        handleTestcase();
    }
}
