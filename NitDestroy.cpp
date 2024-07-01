#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int helper(int n,vector<int>& nums){
   int l=0;
   int r=n-1;
   int cnt=0;
   int zero=0;
       while(nums[l]==0 && l<n){
           zero++;
           l++;
       }
   if(zero==n) return 0;
       while(nums[r]==0){
           r--;
       }
       for(int i=l;i<=r;i++){
           if(nums[i]==0){
               cnt++;
           }
       }
   return (cnt>0) ? 2 : 1;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        cout<<helper(n,nums)<<endl;
    }

    return 0;
}