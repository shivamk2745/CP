// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
string helper(int n,vector<int>& nums,int l,int r,int k){
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    long long partSum=0;
    for(int i=l-1;i<r;i++){
        partSum+=nums[i];
    }
    sum-=partSum;
    long long add=(r-l+1)*k;
    sum+=add;
    return (sum%2==0) ? "NO" : "YES";
}
int main() {
   int t;
   cin>>t;
   while(t--){
   int n,q;
   cin>>n>>q;
   vector<int> nums(n);
   for(int i=0;i<n;i++){
       cin>>nums[i];
   }
   int l,r,k;
   for(int i=0;i<q;i++){
       cin>>l>>r>>k;
       cout<<helper(n,nums,l,r,k)<<endl;
   }
   }
    return 0;
}