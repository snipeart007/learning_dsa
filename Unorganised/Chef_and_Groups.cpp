#include <bits/stdc++.h>
using namespace std;

void handleTestcase() {
    string s;
    cin >> s;
    uint_fast16_t count = 0;
    bool last = false;
    for (const char &c : s) {
        if (last) {
            if (c == '1') {
                continue;
            }
            else {
                last = false;
                count++;
            }
        }
        else {
            if (c == '1')
                last = true;
            else
                continue;
        }
    }
    if (s.back() == '1')
        count++;

    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    for (int e = 0; e < t; e++) {
        handleTestcase();
    }
}
