#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    // Function to check if any two numbers sum up to target (variant 1)
    string twoSumExists(vector<int> &arr, int target) {
        unordered_set<int> numSet;
        for (const int &num : arr) {
            if (numSet.count(target - num))
                return "YES";
            else
                numSet.insert(num);
        }
        return "NO";
    }

    // Variant 2: Return original indices of two numbers that sum to target
    vector<int> twoSumIndices(vector<int> &arr, int target) {
        unordered_map<int, int> valueIndex;
        for (int i = 0; i < arr.size(); i++) {
            auto it = valueIndex.find(target - arr[i]);
            if (it != valueIndex.end()) {
                return {it->second, i};
            }
            else {
                valueIndex[arr[i]] = i;
            }
        }
        return {-1, -1};
    }

    string twoSumExistsWithoutSet(vector<int> &arr, int target) {
        sort(arr.begin(), arr.end());

        int i = 0;
        int j = arr.size() - 1;

        while (i < j) {
            int sum = arr[i] + arr[j];
            if (sum < target) {
                i++;
            }
            else if (sum > target) {
                j--;
            }
            else {
                return "YES";
            }
        }
        return "NO";
    }
};

int main() {
    Solution sol;

    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    vector<int> arr_copy(arr);

    // Variant 1
    cout << sol.twoSumExistsWithoutSet(arr_copy, target) << "\n";

    // Variant 2
    vector<int> res = sol.twoSumIndices(arr, target);
    cout << "[" << res[0] << ", " << res[1] << "]\n";

    return 0;
}