#include <bits/stdc++.h>
using namespace std;

int main() {
  //stl er short algorithm diye to ek line e solve kora jay tai eta porte hobe 
  int n;
  cin>>n;
    vector <int> v(n);
    for(int &x:v){
      cin>>x;
    }
    int max;
    max=v.at(0);
    for(int i=0;i<n;i++){
      if(v.at(i)>v.at(0))
      max=v.at(i);
    }
    int smax;
    smax=v.at(0);
    for(int i=0;i<n;i++){
      if(v.at(i)!=max&&v.at(i)>v.at(0))
      smax=v.at(i);
    }
    cout<<smax;

    return 0;
}