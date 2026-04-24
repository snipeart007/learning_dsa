#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr) {
    int mx = INT_MIN;
    int sec_max = INT_MIN;
    int mx_index = -1;
    for (int i = 0; i < arr.size(); i++) {
        int &a = arr[i];
        if (mx == INT_MIN) {
            mx = a;
            mx_index = i;
            continue;
        }
        if (sec_max == INT_MIN) {
            if (mx > a) {
                sec_max = a;
            }
            else {
                mx = a;
                mx_index = i;
                sec_max = mx;
            }
            continue;
        }
        if (max(a, mx) == a) {
            sec_max = mx;
            mx = a;
            mx_index = i;
        }
        else {
            sec_max = max(sec_max, a);
        }
    }
    return sec_max;
}

bool isSorted(vector<int> &arr) {
    size_t n = arr.size();
    for (size_t i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

// remove duplicate elements from sorted array
void remDupes(vector<int> &arr) { size_t n = arr.size(); }

int main() {
    vector<int> arr = {23, 2,  34, 56, 67, 23, 34, 2,  4,
                       7,  89, 34, 23, 45, 56, 67, 67, 67};
    cout << isSorted(arr) << endl;
    sort(arr.begin(), arr.end());
    cout << isSorted(arr) << endl;
}