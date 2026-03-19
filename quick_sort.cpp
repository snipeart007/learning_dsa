#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void qS(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int j = high;
    for (int i = low + 1; i <= high; i++)
    {
        if (arr[i] > arr[low])
        {
            while (arr[j] > arr[low] and i <= j)
            {
                j--;
            }
            if (i > j)
                break;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    if (low < j - 1)
        qS(arr, low, j - 1);
    if (j + 1 < high)
        qS(arr, j + 1, high);
}

void quick_sort(vector<int> &arr)
{
    if(arr.empty()) return;
    qS(arr, 0, arr.size() - 1);
}

int main() {
    vector<int> arr = {2, 34, 23, 1, 2, 56, 23, 22, 17};
    quick_sort(arr);
    
    for_each(arr.begin(), arr.end(), [](const int& x){
        cout << x << " ";
    });
}