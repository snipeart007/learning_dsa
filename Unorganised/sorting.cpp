#include <utility>
#include <iostream>
#include <concepts>
using namespace std;

void sel_sort(int arr[], int n)
{
    pair<int, int> cur_smallest = {n, __INT_MAX__};
    int lb = 0;
    while (lb < n)
    {
        for (int j = lb; j < n; j++)
        {
            if (arr[j] < cur_smallest.second)
                cur_smallest = {j, arr[j]};
        }
        if (cur_smallest.first != lb)
            swap(arr[cur_smallest.first], arr[lb]);
        lb++;
        cur_smallest = {n, __INT_MAX__};
    }
}

void bubble_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool didSwap = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = true;
            }
        }
        if (!didSwap)
            break;
    }
}

void insert_sort(int arr[], int n)
{
    for (int ub = 1; ub < n; ub++)
    {
        if (arr[ub - 1] < arr[ub])
            continue;
        for (int j = ub; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
        }
    }
}

int main()
{
    int arr[] = {23, 2, 34, 12, 2, 56};
    insert_sort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
}
