#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find maximum sum of subarrays
    // Brute Force approach
    // Time Complexity: O(n^2)
    int bruteMaxSubArray(vector<int> &nums) {
        long long maxSum = LONG_LONG_MIN;
        for (size_t i = 0; i < nums.size(); i++) {
            long long sum = 0;
            for (size_t j = i; j < nums.size(); j++) {
                sum += nums[j];
                maxSum = max(sum, maxSum);
            }
        }
        return maxSum;
    }

    // Better approach: Kadane's Algorithm
    // Time Complexity: O(n)
    int kadaneMaxSubArray(vector<int> &nums) {
        long long sum = 0;
        long long maxSum = LONG_LONG_MIN;

        size_t start, end;
        size_t temp_start;

        for (size_t i = 0; i < nums.size(); i++) {
            if (sum == 0)
                temp_start = i;
            sum += nums[i];
            if (sum > maxSum) {
                maxSum = sum;
                start = temp_start;
                end = i;
            }
            if (sum < 0)
                sum = 0;
        }

        // Subarray: [start, end]
        return maxSum;
    }
    // TODO:
    // pair<long long, pair<size_t, size_t>>
    // recr_maxSum(vector<int> &nums, size_t start, size_t end) {
    //     if (start == end)
    //         return {nums[start], {start, end}};

    //     auto mid = (start + end) / 2;
    //     recr_maxSum(nums, start, mid);
    //     recr_maxSum(nums, mid + 1, end);
    // }

    // int maxSubArray(vector<int> &nums) {
    //     auto result = recr_maxSum(nums, 0, nums.size());

    //     return result.first;
    // }
};

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    // create an instance of Solution class
    Solution sol;

    int maxSum = sol.maxSubArray(arr);

    // Print the max subarray sum
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}