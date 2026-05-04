#include <bits/stdc++.h>
using namespace std;

int main() {
  cout<<"How many element are in your vector ";
  int n;
  cin>>n;
  cout<<"Enter your element one by one ";
    vector <int> v(n);
    for(int &x:v){
      cin>>x;
    }
    int start=0,end=n-1,temp;
    while(start<end){
      temp=v.at(start);
      v.at(start)=v.at(end);
       v.at(end)=temp;
       start++;
       end--;
    }
    cout<<"Your reverse number is "
    for(int &x:v){
      cout<<x<<endl;  
    }

    return 0;
}