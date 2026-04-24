#include <bits/stdc++.h>
using namespace std;
// TODO

// vector<uint16_t> indexes(10000);
// class Solution {
// public:
//     vector<int> shortestToChar(string s, char c) {
//         indexes.clear();
//         uint_fast16_t n = s.size();
//         for(uint_fast16_t i = 0; i < n; i++) {
//             if(s[i] == c) indexes.push_back(i);
//         }

//         vector<int> res(n);
//         int len = indexes.size();
//         int z = (int)(n);
//         for(int i = 0; i < z; i++) {
//             int m = z;
//             for(int j = 0; j < len; j++) {
//                 m = min(m, abs(i-indexes[j]));
//             }
//             res[i] = m;
//         }

//         return res;
//     }
// };
// class Solution
// {
// public:
//     vector<int> shortestToChar(string s, char c)
//     {
//         int n = s.size();
//         vector<int> res(n);
//         for(int i = 0; i < n; i++) {
//             int m = n;
//             for(int j = 0; j <= i; j++) {
//                 if(s[i - j] == c) {
//                     m = min(m, j);
//                     break;
//                 }
//             }
//             for(int j = 1; j < n - i; j++) {
//                 if(s[i + j] == c) {
//                     m = min(m, j);
//                     break;
//                 }
//             }
//             res[i] = m;
//         }
//         return res;
//     }
// };

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        int cur_left = n;
        int cur_right = n;
        vector<int> res(n);
        for(int i = 0; i < n; i++) {
            if(cur_right == i) {
                cur_left = i;
                res[i] = 0;
                // find_cur_right

                break;
            }
            if(s[i] == c) {
                cur_left = i;
                res[i] = 0;
                break;
            }
        }
    }
};

int main()
{
    string s = "loveleetcode";
    char c = 'e';
    Solution sol;
    auto x = sol.shortestToChar(s, c);
    for (auto p : x)
    {
        cout << " " << p;
    }
}