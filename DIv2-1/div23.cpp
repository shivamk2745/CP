#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int helper(int n,int l ,int r,vector<int>& nums){
   int win=0;
   int str=0;
   int sum=0;
   for(int i=0;i<n;i++){
       sum+=nums[i];
       while(sum>r && str<=i){
           sum-=nums[str];
           str++;
       }
       if(sum >= l && sum <= r){
           win++;
           sum=0;
           str=i+1;
       }
   }
   return win;
}
int main() {
     int t;
     cin>>t;
     while (t--) {
       int n,l,r;
       cin>>n>>l>>r;
       vector<int>  nums(n);
       for(int i=0;i<n;i++){
           cin>>nums[i];
       }
       
       cout<<helper( n,l,r,nums)<<endl;
    }
    
    return 0;
}