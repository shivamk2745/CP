#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
   int res=0;
       int n;
       cin>>n;
       for(int i=1;i<=n;i++){
           int x;
           cin>>x;
           res=__gcd(res,abs(x-i));
       }
       cout<<res<<endl;
   }
    return 0;
}