#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,fmax;
  cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      if(arr[0]<arr[i])
      {
        arr[0]=arr[i];
       
      }
    }
    for(int i=0;i<n;i++){
      cout<<arr[i];
    }
    return 0;
}