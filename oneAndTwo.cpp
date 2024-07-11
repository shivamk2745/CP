#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int helper(int n, vector<int>& nums) {
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(nums[i]==1) cnt1++;
        if(nums[i]==2) cnt2++;
    }
    if(cnt2%2==1) return -1;
    else{
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==2) cnt++;
            if(cnt2/2==cnt){
                return i+1;
            }
        }
    }
    return -1;
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