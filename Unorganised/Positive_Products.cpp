#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int e = 0; e < t; e++) {
        int n;
        cin >> n;
        int pos = 0;
        int neg = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x < 0)
                neg++;
            else if (x > 0)
                pos++;
        }
        long pairs = 0;
        if (pos > 1)
            pairs += ((long)(pos) * (pos - 1)) / 2;
        if (neg > 1)
            pairs += ((long)(neg) * (neg - 1)) / 2;

        cout << pairs << endl;
    }
}
