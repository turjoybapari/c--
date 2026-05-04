#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str ="Turjoy";
    char arr[100]="Bapary";
    
    /*puts(str);
    puts(arr);*/
    // printf("%d",strcmp(str,arr));
   char *p;
   p=strchr(str,'o');
  cout<<p-str;
  
    return 0;
}