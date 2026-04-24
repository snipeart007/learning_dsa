#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string checkCoupon(int n, int x, int y, vector<int>& prices) {
        int total = 0;
        int dis_total = 0;
        for(const int& price: prices) {
            total += price;
            dis_total += max(0, price - y);
        }
        dis_total += x;
        if(dis_total < total) return "COUPON";
        return "NO COUPON";
    }
};
