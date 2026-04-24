#include <utility>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

void pairs()
{
    pair<int, int> a = {24, 3};

    pair<int, pair<int, int>> b = {1, {2, 3}};

    cout << a.first << " " << a.second;
    cout << b.first << " " << b.second.first << " " << b.second.second;
}

void vectors()
{
    vector<int> a;
    a.push_back(34);
    a.push_back(45);
    a.emplace_back(36);
    cout << a[1] << endl;
    cout << a.at(0) << endl;
    cout << a.capacity() << endl;
}

void iterators()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int>::iterator it = a.begin();

    cout << *it << endl;
    it++;
    cout << *it << endl;
    it = it + 2;
    cout << *it << endl;

    a.erase(a.begin());
    a.erase(a.begin() + 2, a.begin() + 4);

    // int max = *max_element(a.begin(), a.begin() + a.size());
}

pair<uint8_t, uint8_t> f() {
    char a = '8';
    return {8, (uint8_t)(a)};
}



void lists() {
    list<int> l;

    l.push_back(2);
    l.emplace_front(2);

    // list -> doubly linked list: insert and front operations
}

int main()
{
    f();
}
