#include <bits/stdc++.h>

using namespace std;

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n + 1 - i); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n + 1 - i); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    int x = (2 * n) - 1;
    for (int i = 1; i <= n; i++)
    {
        int y = (2 * i) - 1;
        for (int j = 1; j <= (x - y) / 2; j++)
            cout << "  ";
        for (int i = 1; i <= y; i++)
            cout << "* ";
        for (int j = 1; j <= (x - y) / 2; j++)
            cout << "  ";
        cout << endl;
    }
}

void pattern8(int n)
{
    int x = (2 * n) - 1;
    for (int i = n; i >= 1; i--)
    {
        int y = (2 * i) - 1;
        for (int j = 1; j <= (x - y) / 2; j++)
            cout << "  ";
        for (int i = 1; i <= y; i++)
            cout << "* ";
        for (int j = 1; j <= (x - y) / 2; j++)
            cout << "  ";
        cout << endl;
    }
}

void pattern9(int n)
{
    int x = (2 * n) - 1;
    for (int i = 1; i <= n; i++)
    {
        int y = (2 * i) - 1;
        for (int j = 1; j <= (x - y) / 2; j++)
            cout << "  ";
        for (int i = 1; i <= y; i++)
            cout << "* ";
        for (int j = 1; j <= (x - y) / 2; j++)
            cout << "  ";
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        int y = (2 * i) - 1;
        for (int j = 1; j <= (x - y) / 2; j++)
            cout << "  ";
        for (int i = 1; i <= y; i++)
            cout << "* ";
        for (int j = 1; j <= (x - y) / 2; j++)
            cout << "  ";
        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
            cout << "* ";
        cout << endl;
    }
}

void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (i + j + 1) % 2 << " ";
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        for (int j = 1; j <= (n - i) * 2; j++)
            cout << "  ";
        for (int j = i; j >= 1; j--)
            cout << j << " ";
        cout << endl;
    }
}

void pattern13(int n)
{
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << a[j] << " ";
        cout << endl;
    }
}

void pattern15(int n)
{
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
            cout << a[j] << " ";
        cout << endl;
    }
}

void pattern16(int n)
{
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << a[i - 1] << " ";
        cout << endl;
    }
}

void pattern17(int n)
{
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int x = (2 * n) - 1;
    for (int i = 1; i <= n; i++)
    {
        int y = (2 * i) - 1;
        for (int j = 1; j <= (x - y) / 2; j++)
            cout << "  ";
        for (int j = 0; j < i; j++)
            cout << a[j] << " ";
        for (int j = i - 2; j >= 0; j--)
            cout << a[j] << " ";
        for (int j = 1; j <= (x - y) / 2; j++)
            cout << "  ";
        cout << endl;
    }
}

void pattern18(int n)
{
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
            cout << a[n - j] << " ";
        cout << endl;
    }
}

void pattern19(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        for (int j = 1; j <= (n - i) * 2; j++)
            cout << "  ";
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        for (int j = 1; j <= (n - i) * 2; j++)
            cout << "  ";
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
}

void pattern20(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        for (int j = 1; j <= (n - i) * 2; j++)
            cout << "  ";
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
            cout << "* ";
        for (int j = 1; j <= (n - i) * 2; j++)
            cout << "  ";
        for (int j = i; j >= 1; j--)
            cout << "* ";
        cout << endl;
    }
}

void pattern21(int n) {
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      if(min({i, j, n+1-i, n+1-j}) == 1)
        cout << "* ";
      else
        cout << "  ";
    }
    cout << endl;
  }
}

int select_num(int n, int i, int j) {
  int y = 2 * n - 1;
  int x = min({i, j, y+1-i, y+1-j});
  return n+1-x;
}

void pattern22(int n) {
  int y = 2 * n - 1;
  for(int i = 1; i <= y; i++) {
    for(int j = 1; j <= y; j++) {
      cout << select_num(n, i, j) << " ";
    }
    cout << endl;
  }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;
    pattern22(n);
}
