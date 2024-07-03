#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int helper(int n,vector<int>& nums){
    int cnt=0;
        for(int i=n-2;i>=0;i--){
            while(nums[i] >= nums[i+1] && nums[i]>0){
                nums[i]=nums[i]/2;
                cnt++;
            }
            if(nums[i]==nums[i+1]){
                return -1;
            }
        }
    return cnt;
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