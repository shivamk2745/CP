#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int helper(int n,vector<int>& nums){
    int sumN=0;
    int sumP=0;
    for(int i=0;i<n;i++){
        if(nums[i]<0) sumN+=nums[i];
        if(nums[i]>0) sumP+=nums[i];
    }
    int cnt=0;
    while(sumN+sumP < 0){
        sumN=sumN+1;
        sumP=sumP+1;
        cnt++;
    }
    return (abs(sumN)%2==1) ? cnt+1 : cnt;
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