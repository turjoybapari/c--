#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &x:v){
      cin >> x;
    }
    int c = 0;
    for (int i = 0; i < v.size();i++){
      for (int j = i;j< v.size()-1;j++){
        if(v.at(j)<v.at(j+1)){
          swap(v.at(j), v.at(j + 1));
          c++;
        }
      }
    }
    cout << c;

    return 0;
}