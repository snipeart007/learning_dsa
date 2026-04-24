#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<uint_fast32_t> fingers;
    for (int e = 0; e < t; e++)
    {
        uint_fast16_t n;
        cin >> n;
        fingers.reserve(n);

        pair<bool, bool> res = {true, true};
        
        for(uint_fast16_t i = 0; i < n; i++) {
            uint_fast32_t x;
            cin >> x;
            fingers.push_back(x);
        }

        for(uint_fast32_t i = 0; i < n; i++) {
            uint_fast32_t y;
            cin >> y;
            if(y < fingers[i]) res.first = false;
            if(y < fingers[n - 1 - i]) res.second = false;
        }

        if(res.first) {
            if(res.second)
                cout << "both" << endl;
            else cout << "front" << endl;
        }
        else if(res.second)
            cout << "back" << endl;
        else
            cout << "none" << endl;
        fingers.clear();
    }
}
