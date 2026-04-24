#include <bits/stdc++.h>


// #include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int e = 0; e < t; e++) {
        int n;
        cin >> n;
        int a = 0;
        int b = 0;
        for (int i = 0; i < n; i++) {
            int a0, b0;
            cin >> a0 >> b0;

            if (a == 0) {
                a = a0;
                b = b0;
                continue;
            }

            if (a <= a0 && b0 <= b) {
                a = a0;
                b = b0;
                continue;
            }
            // if a0 < a < b < b0, no change
            else if (b0 < a) {
                a = b0;
                b = b0;
                continue;
            }
            else if (b < a0) {
                a = a0;
                b = a0;
                continue;
            }
            else if (a0 < a && b0 < b) {
                b = b0;
                continue;
            }
            else if (a < a0 && b < b0) {
                a = a0;
                continue;
            }
        }
        cout << b << endl;
    }
}