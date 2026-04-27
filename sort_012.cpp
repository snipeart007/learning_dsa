#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to sort the array containing only 0s, 1s and 2s
    // Brute-Force
    // Time Complexity: O(2n)
    void bruteForceSortZeroOneTwo(vector<int> &nums) {
        int zeroes = 0;
        int ones = 0;
        int twos = 0;
        for (const int &num : nums) {
            switch (num) {
            case 0:
                zeroes++;
                break;
            case 1:
                ones++;
                break;
            case 2:
                twos++;
                break;
            }
        }
        nums.clear();
        for (int i = 0; i < zeroes; i++)
            nums.push_back(0);
        for (int i = 0; i < ones; i++)
            nums.push_back(1);
        for (int i = 0; i < twos; i++)
            nums.push_back(2);
    }

    // Optimal
    // Dutch National Flag Algorithm
    // Time Complexity: O(n) (One-pass Algorithm)
    // Three Pointer: low, mid, high
    // [0, low-1] -> zero
    // [low, mid-1] -> one
    // [high+1, n-1] -> two
    // 0 ... low ... mid ... high ... n-1
    // 000000 1111111 ********* 222222222
    // [mid, high] -> unsorted
    void sortZeroOneTwo(vector<int> &nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                if (low != mid) {
                    swap(nums[low], nums[mid]);
                }
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else if (nums[mid] == 2) {
                if (mid != high)
                    swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

// Driver code
int main() {
    vector<int> nums = {1, 0, 2, 1, 0};

    Solution obj;
    obj.sortZeroOneTwo(nums);

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}