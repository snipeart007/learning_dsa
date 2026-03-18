#include <bits/stdc++.h>
using namespace std;

void print(int i) {
    if(i < 1)
        return;
    print(i - 1);
    cout << " " << i;
}

int sumNInt(int i) {
    if(i == 0) return 0;
    return i + sumNInt(i - 1);
}

unsigned long long factorial(unsigned long long i) {
    if(i == 0) return 1;
    return i * factorial(i - 1);
}

template<typename T>
void reverseArray(int i, T a[], int n) {
    if(i >= n/2) return;
    swap(a[i], a[n-1-i]);
    reverseArray(i + 1, a, n);
}

bool pCheck(int i, string s) {
    if(i > s.length()) return true;
    if(s[i] != s[s.length()-1-i])
        return false;
    return pCheck(i + 1, s);
}

bool palindrome(string s) {
    return pCheck(0, s);
}

int main() {
    string s = "abcba";
    cout << palindrome(s);
}
