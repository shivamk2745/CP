// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int helper(int n,vector<int>& nums){
    int mini=INT_MAX;
    for(int i=0;i<n-1;i++){
        if(nums[i]>nums[i+1]){
            return 0;
        }
        mini=min(mini,nums[i+1]-nums[i]);
    }
    return (mini/2)+1;
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