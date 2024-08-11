#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll helper(ll n,vector<ll>& nums){
    ll cnt=0;
     ll odd=0;
     ll even=0;
     for(ll i=0;i<n;i++){
         if(nums[i]%2==1 && odd<nums[i]) odd=nums[i];
         if(nums[i]%2==0 && even<nums[i]) even=nums[i];
     }
     bool check=true;
     for(ll i=1;i<n;i++){
         if(nums[i]%2!=nums[0]%2){
             check=false;
             break;
         }
     }
     
     if(check){
         return 0;
     }
     
     sort(nums.begin(),nums.end());
     
     for(ll i=0;i<n;i++){
         if(nums[i]%2==0 && nums[i]<odd){
             cnt++;
             nums[i]=nums[i]+odd;
             odd=max(odd,nums[i]);
         }
     }
     check=true;
     for(ll i=1;i<n;i++){
         if(nums[i]%2!=nums[0]%2){
             check=false;
             break;
         }
     }
    //  for(auto num:nums){
    //      cout<<num<<" ";
    //  }
    //  cout<<endl;
     
     if(check){
         return cnt;
     }
     
     ll idx=0;
     for(ll i=0;i<n;i++){
         if(nums[i]%2==1 && nums[i]==odd){
             idx=i;
             break;
         }
     }
     nums[idx]=odd+even;
     cnt++;
     for(ll i=0;i<n;i++){
         if(nums[i]%2==0) cnt++;
     }
     return cnt;
}
int main() {
 ll t;
 cin>>t;
 while(t--){
     ll n;
     cin>>n;
     vector<ll> nums(n);
     for(ll i=0;i<n;i++) cin>>nums[i];
     cout<<helper(n,nums)<<endl;
 }
 return 0;
}
