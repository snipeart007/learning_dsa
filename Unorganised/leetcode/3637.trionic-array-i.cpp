#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=3637 lang=cpp
 *
 * [3637] Trionic Array I
 *
 * https://leetcode.com/problems/trionic-array-i/description/
 *
 * algorithms
 * Easy (49.53%)
 * Likes:    470
 * Dislikes: 40
 * Total Accepted:    194.1K
 * Total Submissions: 392K
 * Testcase Example:  '[1,3,5,4,2,6]'
 *
 * You are given an integer array nums of length n.
 *
 * An array is trionic if there exist indices 0 < p < q < n − 1 such
 * that:
 *
 *
 * nums[0...p] is strictly increasing,
 * nums[p...q] is strictly decreasing,
 * nums[q...n − 1] is strictly increasing.
 *
 *
 * Return true if nums is trionic, otherwise return false.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [1,3,5,4,2,6]
 *
 * Output: true
 *
 * Explanation:
 *
 * Pick p = 2, q = 4:
 *
 *
 * nums[0...2] = [1, 3, 5] is strictly increasing (1 < 3 < 5).
 * nums[2...4] = [5, 4, 2] is strictly decreasing (5 > 4 > 2).
 * nums[4...5] = [2, 6] is strictly increasing (2 < 6).
 *
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [2,1,3]
 *
 * Output: false
 *
 * Explanation:
 *
 * There is no way to pick p and q to form the required three segments.
 *
 *
 *
 * Constraints:
 *
 *
 * 3 <= n <= 100
 * -1000 <= nums[i] <= 1000
 *
 *
 */

// @lc code=start
class Solution {
  public:
    bool isTrionic(vector<int> &nums) {
        int incr = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                continue;
            }
            switch (incr) {
            case 0: {
                if (nums[i - 1] < nums[i]) {
                    incr++;
                    continue;
                }
                else
                    return false;
            }
            case 1: {
                if (nums[i - 1] < nums[i]) {
                    continue;
                }
                else if (nums[i - 1] > nums[i]) {
                    incr++;
                    continue;
                }
                else
                    return false;
                break;
            }
            case 2: {
                if (nums[i - 1] > nums[i]) {
                    continue;
                }
                else if (nums[i - 1] < nums[i]) {
                    incr++;
                    continue;
                }
                else
                    return false;
            }
            case 3: {
                if (nums[i - 1] < nums[i]) {
                    continue;
                }
                else {
                    return false;
                }
            }
            }
        }
        if (incr == 3)
            return true;
        return false;
    }
};
// @lc code=end
