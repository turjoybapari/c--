#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int &x:v){
    cin>>x;
    }
    for( int i=0;i<n-1;i++){
      int min=i;
      for(int j=i+1;j<n;j++){
        if(v.at(j)<v.at(min)){
          min=j;      
        }
      }
      swap(v.at(min),v.at(i));
    }
    for (int x:v){
    cout<<x;
    }
    return 0;
}