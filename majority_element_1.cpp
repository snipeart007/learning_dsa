#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the majority element in an array(count > n/2)
    // Time Complexity: O(2n)
    // Space Complexity: O(n)
    // Better approach
    int betterMajorityElement(vector<int> &nums) {
        unordered_map<int, size_t> countNums;

        for (const int &num : nums)
            countNums[num]++;

        int maxNum;
        for (const auto &ele : countNums) {
            if (ele.second > nums.size() / 2) {
                maxNum = ele.first;
            }
        }

        return maxNum;
    }

    // Time Complexity: O(n)
    // Space Complexity: O(1)
    // Optimal Approach
    // Moose's Voting Algorithm
    int majorityElement(vector<int> &nums) {
        int majEle = nums[0];
        size_t count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == majEle)
                count++;
            else {
                if (count)
                    count--;
                else {
                    majEle = nums[i];
                    count++;
                }
            }
        }
        return majEle;
    }
};

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};

    // Create an instance of Solution class
    Solution sol;

    int ans = sol.majorityElement(arr);

    // Print the majority element found
    cout << "The majority element is: " << ans << endl;

    return 0;
}