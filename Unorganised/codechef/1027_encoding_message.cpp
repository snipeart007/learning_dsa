#include <bits/stdc++.h>
using namespace std;

void handleTestcase() {
    int n;
    cin >> n;
    string s;
    s.reserve(n);
    cin >> s;
    for(int i = 0; i < n / 2; i++) {
        swap(s[2 * i], s[2 * i + 1]);
    }
    for(char& c: s) {
        int offset = c - 'a';
        c = char('z' - offset);
    }
    cout << s;
}

int main() {
	int t;
    cin >> t;
    for(int e = 0; e < t; e++) {
        handleTestcase();
    }
}
