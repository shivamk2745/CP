#include<bits/stdc++.h>
#include <iostream>
using namespace std;
long long helper(int x,int y ,int k){
    long long new_x=y-x%y;
   while(k>=new_x){
       k-=new_x;
       x+=new_x;
       while(x%y==0){
           x=x/y;
       }
       new_x=y-x%y;
       if(x==1){
           k=k%new_x;
           x+=k;
           k=0;
           break;
       }
   }
   x+=k;
   return x;
}
int main() {
     int t;
     cin>>t;
     while (t--) {
       int x,y,k;
       cin>>x>>y>>k;
       
       cout<<helper(x,y,k)<<endl;
    }
    
    return 0;
}