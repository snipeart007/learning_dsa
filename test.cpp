// #include <bits/stdc++.h>
// using namespace std;

// string finalString(string s)
// {
//     string f;
//     f.reserve(s.size());

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == 'i')
//             reverse(f.begin(), f.end());
//         else
//             f.push_back(s[i]);
//     }
//     return f;
// }

// bool armstrongNum(int n)
// {
//     int x = n;
//     int r = 0;

//     while (x > 0)
//     {
//         r = r + pow(x % 10, 3);
//         x = x / 10;
//     }
//     return r == n;
// }

// vector<int> factors(int n)
// {
//     vector<int> v;
//     int sq_rt = (int)(sqrt(n));
//     for (int i = 1; i <= sq_rt; i++)
//     {
//         if (n % i == 0)
//         {
//             v.emplace_back(i);
//             if (i != n / i)
//                 v.emplace_back(n / i);
//         }
//     }
//     sort(v.begin(), v.end());
//     return v;
// }

// bool prime(int n)
// {
//     int sq_rt = (int)(sqrt(n));
//     for (int i = 2; i <= sq_rt; i++)
//         if (n % i == 0)
//             return false;
//     return true;
// }

// int gcd(int n1, int n2)
// {
//     // Euclidean Algorithm
//     int x = n1;
//     int y = n2;

//     while (x > 0 && y > 0)
//     {
//         if (x > y)
//         {
//             x = x % y;
//         }
//         else if (y > x)
//         {
//             y = y % x;
//         }
//     }
//     if (x == 0)
//         return y;

//     return x;
// }

// void f()
// {
//     cout << "meow" << endl;
//     f();
// }

// int diagonalSum(vector<vector<int>> &mat)
// {
//     int sum = 0;
//     int n = mat.size();
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + mat[i][i] + mat[i][n - 1 - i];
//     }
//     if (n % 2 != 0)
//         sum = sum - mat[(n - 1) / 2][(n - 1) / 2];
//     return sum;
// }

// class RecentCounter
// {
// public:
//     vector<uint16_t> reqTimes;
//     RecentCounter()
//     {
//     }

//     int ping(int t)
//     {
//         reqTimes.emplace_back((uint16_t)(t));
//         uint16_t sum = 1;
//         uint16_t n = (uint16_t)(reqTimes.size());
//         for(uint16_t i = n - 2; i >= 0; i--) {
//             if(reqTimes[i] >= (t - 3000)) sum++;
//             else break;
//         }
//         return sum;
//     }
// };

// class Solution {
// public:
//     static bool comparator(const pair<string, int>& p1, const pair<string, int>& p2) {
//         if(p1.second > p2.second) return true;
//         return false;
//     }
//     vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
//         vector<pair<string, int>> data;
//         uint16_t n = (uint16_t)(names.size());
//         data.reserve(n);
//         for(uint16_t i = 0; i < n; i++)
//             data.emplace_back(names[i], heights[i]);
//         sort(data.begin(), data.end(), comparator);
//         for(uint16_t i = 0; i < n; i++) {
//             names[i] = data[i].first;
//         }
//         return names;
//     }
// };

// class Solution {
// public:
//     vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
//         sort(score.begin(), score.end(), [&k](const vector<int>& a, const vector<int>& b){
//             return a[k] > b[k];
//         });
//         return score;
//     }
// };

// class Solution {
// public:
//     bool checkValid(vector<vector<int>>& matrix) {
//         uint8_t n = matrix.size();
//         unordered_set<uint8_t> s;
//         s.reserve(n);
//         for(auto a: matrix) {
//             for(auto x: a) {
//                 s.insert((uint8_t)(x));
//             }
//             if(s.size() < n) return false;
//             s.clear();
//         }
//         for(uint8_t i = 0; i < n; i++) {
//             for(int j = 0; j < n; j++) {
//                 s.insert(matrix[j][i]);
//             }
//             if(s.size() < n) return false;
//             s.clear();
//         }
//         return true;
//     }
// };

// int main()
// {
//     // string s = "string";

//     // cout << finalString(s);
//     // cout << armstrongNum(370);

//     // int n1, n2;
//     // cout << "Enter two number: ";
//     // cin >> n1 >> n2;
//     // cout << "\nFactors: \n";
//     // for (const auto &value : factors(n))
//     //     cout << value << "\t";
//     // cout << "\nPrime: " << prime(n);
//     // cout << "\nGCD: " << gcd(n1, n2);

//     RecentCounter *obj = new RecentCounter();
//     int param_1 = obj->ping(1);
//     int param_2 = obj->ping(100);
//     int param_3 = obj->ping(3001);
//     int param_4 = obj->ping(3002);
// }

