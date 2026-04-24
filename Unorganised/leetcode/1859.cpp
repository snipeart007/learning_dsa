#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

class Solution
{
public:
    string sortSentence(string s)
    {
        string temp;
        temp.reserve(s.size() + 1);
        vector<string> words(10);
        size_t count = 0;

        stringstream ss(s);

        while (ss >> temp)
        {
            size_t n = temp.size();
            cout << (size_t)(temp[n - 1] - '1') << endl;
            words[(size_t)(temp[n - 1] - '1')] = temp.substr(0, n - 1);
            count++;
        }
        temp.clear();

        for (size_t i = 0; i < count; i++)
        {
            temp += words[i] + " ";
        }

        temp.pop_back();
        return temp;
    }
};

int main()
{
    Solution sol;
    cout << sol.sortSentence("is2 sentence4 This1 a3");
}