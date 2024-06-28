// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
int helper(int n,vector<int>& nums,int k){
    sort(nums.begin(),nums.end());
    int ans=1;
    int maxi=1;
    for(int i=0;i<n-1;i++){
        if(nums[i+1]-nums[i]<=k){
            ans++;
        }else{
            ans=1;
        }
             maxi=max(maxi,ans);
           
    }
    return n-maxi;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        cout<<helper(n,nums,k)<<endl;
    }
    return 0;
}