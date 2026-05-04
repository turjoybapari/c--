#include <bits/stdc++.h>
using namespace std;

int main() {
  //this problem is solved by two pointer
    int arr[]={10,20,7,11,8,4};
    int target,a=0;
    cin>>target;
    int start=0;
    int end=5;
    while(start<=end){
      if(arr[start]==target){
        a=start;
      cout<<a;
      break;
      }
      else if (arr[end]==target){
        a=end;
        cout<<a;
        break;
      }
      else{
        start++;
        end--;
      }
    }
    return 0;
}