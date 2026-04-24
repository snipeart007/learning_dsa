#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> arr;
    for (int e = 0; e < t; e++) {
        int n;
        cin >> n;
        arr.reserve(n);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int i, j, k;
        for (i = 0; i < n - 2; i++) {
            for (j = i + 1; j < n - 1; j++) {
                for (k = j + 1; k < n; k++) {
                    if (arr[i] + arr[j] != arr[k])
                        goto exit;
                }
            }
        }
        cout << -1 << endl;
        arr.clear();
        continue;

    exit:
        cout << i << " " << j << " " << k << endl;
        arr.clear();
    }
}
