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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s.find("...") != string::npos)
        {
            cout << "2" << endl;
        }
    else{
        int a = count(s.begin(), s.end(), '.');
        cout <<a<<endl;
    }
}

    return 0;
}