#include <iostream>
#include <math.h>
using namespace std;
void sq (int x){
  for(int i =1;i<=x;i++){
    cout<<pow(i,2)<<endl;
  }
}
int main() {
  int x;
  cin>>x ;
   sq(x); 
    return 0;
}