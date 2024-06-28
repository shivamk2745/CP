#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int helper(int a,int b ,int n,vector<int>& nums){
    sort(nums.begin(),nums.end());
    int sum=0;
    for(int i=0;i<n;i++){
        if(nums[i]<=a){
            sum+=nums[i];
        }else{
            sum+=a;
        }
    }
    return sum+b-1;
}
int main() {
     int t;
     cin>>t;
     while (t--) {
       int a,b,n;
       cin>>a>>b>>n;
       vector<int> nums(n);
       for(int i=0;i<n;i++){
           cin>>nums[i];
       }
       cout<<helper(a,b,n,nums)<<endl;
    }
    
    return 0;
}