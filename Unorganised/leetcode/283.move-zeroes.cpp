// #include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;
/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 *
 * https://leetcode.com/problems/move-zeroes/description/
 *
 * algorithms
 * Easy (63.66%)
 * Likes:    19377
 * Dislikes: 600
 * Total Accepted:    5M
 * Total Submissions: 7.9M
 * Testcase Example:  '[0,1,0,3,12]'
 *
 * Given an integer array nums, move all 0's to the end of it while maintaining
 * the relative order of the non-zero elements.
 *
 * Note that you must do this in-place without making a copy of the array.
 *
 *
 * Example 1:
 * Input: nums = [0,1,0,3,12]
 * Output: [1,3,12,0,0]
 * Example 2:
 * Input: nums = [0]
 * Output: [0]
 *
 *
 * Constraints:
 *
 *
 * 1 <= nums.length <= 10^4
 * -2^31 <= nums[i] <= 2^31 - 1
 *
 *
 *
 * Follow up: Could you minimize the total number of operations done?
 */

// @lc code=start
class Solution {
  public:
    void moveZeroes(vector<int> &nums) {
        int insertPos = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                if (i != insertPos) {
                    swap(nums[i], nums[insertPos]);
                }
                insertPos++;
            }
        }
    }
};

int main() {
    Solution sol;
    const int N = 200000;
    std::vector<int> data(N);

    // Set up random number engine
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 1); // For 0s and 1s

    // Fill the vector
    generate(data.begin(), data.end(), [&]() { return dis(gen); });
    sol.moveZeroes(data);
    getchar();
}
// @lc code=end
