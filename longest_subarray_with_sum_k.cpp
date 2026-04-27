#include <bits/stdc++.>"

using namespace std;

class Solution {
  public:
    // Better for positives only, Optimal for zeroes and negatives
    // Average Case: O(n*log(n))
    // Worst Case: O(n^2)
    int longestSubarray(vector<int> &nums, long long k) {
        unordered_map<long long, int> preSumMap;
        long long sum = 0;
        int maxLen = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum == k)
                maxLen = max(maxLen, i + 1);
            long long rem = sum - k;
            if (preSumMap.count(rem)) {
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }
            if (!preSumMap.count(sum))
                preSumMap[sum] = i;
        }
        return maxLen;
    }
    // Optimal solution for only Positives
    // Time Complexity: O(2n)
    int longestSubarrayPositives(vector<int> &nums, long long k) {
        int i = 0;
        long long sum = 0;
        int maxLen = 0;
        nums.for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];
            while (i <= j && sum > k) {
                sum -= nums[i];
                i++;
            }
            if (sum == k) {
                maxLen = max(maxLen, j - i + 1);
            }
        }
        return maxLen;
    }
};
int main() {
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;

    // Creating an object of Solution class
    Solution sol;

    /* Function call to find the length
    of longest subarray having sum k */
    int ans = sol.longestSubarrayPositives(nums, k);

    cout << "The length of longest subarray having sum k is: " << ans;

    return 0;
}
