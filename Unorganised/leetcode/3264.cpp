#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // index, value
    typedef pair<int, int> pii;

    template <typename _Tp, typename _Sequence = vector<_Tp>,
              typename _Compare = less<typename _Sequence::value_type>>
    class IterablePriorityQueue : public priority_queue<_Tp, _Sequence, _Compare>
    {
        public:
         auto begin() const { return this->c.begin(); }
            auto end() const { return this->c.end(); }
    };
    struct Comparator
    {
        bool operator()(const pii &p1, const pii &p2)
        {
            // returns true if first argument should move down the queue
            if (p1.second > p2.second)
                return true;
            else if (p1.second < p2.second)
                return false;
            else
                return p1.first > p2.first;
        }
    };

    vector<int> getFinalState(vector<int> &nums, int k, int multiplier)
    {
        IterablePriorityQueue<pii, vector<pii>, Comparator> pq;
        int n = nums.size();
        for (int i = 0; i < n; i++)
            pq.emplace(i, nums[i]);

        for (int i = 0; i < k; i++)
        {
            auto val = pq.top();
            pq.pop();
            val.second *= multiplier;
            pq.push(val);
        }
        for(auto a: pq)
            nums[a.first] = a.second;
        return nums;
    }
};