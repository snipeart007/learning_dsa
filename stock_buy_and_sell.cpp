#include <bits/stdc++.h>
#include <climits>
using namespace std;

class Solution {
  public:
    // Function to calculate max profit
    int stockbuySell(vector<int> &prices) {
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;

        for (size_t i = 1; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i - 1]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        return max(maxProfit, 0);
    }
};

// Driver code
int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Max Profit: " << sol.stockbuySell(prices) << endl;
    return 0;
}