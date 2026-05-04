#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout<<"Enter  your total number of element ";
  int n,a=0;
  cin>>n;
    vector <int> v(n);
    cout<<"Enter  your element one by  one ";
    for(int i=0;i<n;i++){
      cin>>v.at(i);
    }
    cout<<"Enter your target sum ";
    int s;
    cin>>s;
    for(int j=0;j<n;j++){
      for(int k=j+1;k<n;k++){
        if(v.at(j)+v.at(k)==s){
          a++;
        }
      }
    }
    cout<<a;
    return 0;
}