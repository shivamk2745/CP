// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
   long long n,q;
   cin>>n>>q;
  vector<long long> nums(n+1);
    vector<long long> pre(n+1);
      long long curr=0;
   for(int i=1;i<=n;i++){
       cin>>nums[i];
        pre[i]=pre[i-1];
        pre[i]+=nums[i];
   }
   for(int i=0;i<q;i++){
   long long l,r,k;
       cin>>l>>r>>k;
      long long res=pre[n]-(pre[r]-pre[l-1])+k*(r-l+1);
      if(res%2!=0){
          cout<<"YES"<<endl;
      }else{
          cout<<"NO"<<endl;
      }
   }
   }
    return 0;
}