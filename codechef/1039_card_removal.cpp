#include <bits/stdc++.h>

using namespace std;

void handleTestcase() {
    int n;
    cin >> n;
    int arr[11] = {0};
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr[x]++;
    }
    int max_value = 0;
    for (const auto & a: arr) max_value = max(max_value, a);
    cout << n - max_value << endl;
}

int main() {
    int t;
    cin >> t;
    for (int e = 0; e < t; e++) {
        handleTestcase();
    }
}