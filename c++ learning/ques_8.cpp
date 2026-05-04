#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v) {
        cin >> x;
    }
    int q;
    cin >> q;
    while (q--) {
        int num;
        cin >> num;
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (v[i] == num) {
                found = true;
                break;
            }
        }
        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
