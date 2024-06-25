#include<bits/stdc++.h>
#include <iostream>
using namespace std;
string helper(int n,int k,vector<int>& nums){
    for(int i=0;i<n;i++){
        if(nums[i]==k) return "Yes";
    }
    return "No";
}
int main() {
     int t;
     cin>>t;
     while(t--){
         int n,k;
         cin>>n>>k;
         vector<int> nums(n);
         for(int i=0;i<n;i++){
             cin>>nums[i];
         }
         cout<<helper(n,k,nums)<<endl;
     }

    return 0;
}