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
    string s;
    cin >> s;
    int m = 0,j;
    int c = 1;
    for (int i = 0; i < s.size()-1;i++){
        if(s[i]==s[i+1]){
            c++;
        }
        else{
            c = 1;
        }
        m = max(c,m);
    }
    cout << m;
    return 0;
}