#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<char,int> m;
    m['T'] = 1;
    m['U'] = 2;
    m['R'] = 3;
    m['J'] = 4;
    m['O'] = 5;
    auto it = m.find('A');
    cout << (*it).first;

    return 0;
}