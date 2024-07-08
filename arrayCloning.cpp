// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
long long helper(long long n ,vector<long long>& nums){
    map<long long,long long> mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    long long maxi=0;
    for(auto num:mpp){
        maxi=max(maxi,num.second);
    }
    long long ans=0;
    while(maxi < n){
       long long cnt=min(n-maxi,maxi);
       ans+=1+cnt;
       maxi+=cnt;
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        cout<<helper(n,nums)<<endl;
    }

    return 0;
}