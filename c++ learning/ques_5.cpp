#include <bits/stdc++.h>
using namespace std;

int main() {
   cout<<"Enter  your total number of element ";
  int n;
  cin>>n;
    vector <int> v(n);
    cout<<"Enter  your element one by  one ";
    for(int i=0;i<n;i++){
      cin>>v.at(i);
    }
   
    for(int j=0;j<n;j++){
      //Assumption Method (যাকে আমরা প্রোগ্রামিংয়ের ভাষায় Boolean Flag Technique বলি) হলো এক ধরণের লজিক্যাল পদ্ধতি যেখানে আমরা কোনো তদন্ত শুরু করার আগেই একটা ফলাফল "ধরে নিই"।
      //লুপ শুরু করার ঠিক আগে আমরা ধরে নিই যে, আমরা যা খুঁজছি তা সত্য (বা মিথ্যা)। তোমার কোডে: bool a = false; এখানে তুমি মনে মনে ধরে নিচ্ছ: "আমি ধরে নিলাম এই সংখ্যাটি ডুপ্লিকেট নয় (অর্থাৎ ইউনিক)।"

      bool  a=false;
      for(int k=0;k<n;k++){
        //এরপর তুমি ইনার লুপ (Inner Loop) চালিয়ে প্রমাণ খোঁজো যে তোমার ধারণা ভুল কি না।
        if(j == k){ continue;}
        if(v.at(j)==v.at(k)){
          //এখানে যদি একবারও v[j] == v[k] মিলে যায়, তবে তোমার আগের ধারণা (a = false) ভেঙে যায় এবং তুমি নতুন প্রমাণ সেট করো (a = true)।
        a=true;
        break;
        }
      }
       if(a==false){
        cout<<v.at(j);
    }
   
      }
      return 0;
    }