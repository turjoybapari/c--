#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::set<int> s;
    int n, temp;

    std::cout << "Enter number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> temp;
        s.insert(temp); // O(log n) per insertion
    }
    s.erase(s.begin(),s.begin()+3);
    for (auto x:s)
    {
        cout << x;
    }

    return 0;
}