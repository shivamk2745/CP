#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int helper(int n,vector<int>& nums){
  int maxi=0;
  int mini=INT_MAX;
  for(int i=0;i<n;i++){
      maxi=max(maxi,nums[i]);
      mini=min(mini,nums[i]);
  }
   int maxiAns=nums[n-1]-nums[0];
  
      for(int i=0;i<n-1;i++){
          maxiAns=max(maxiAns,nums[i]-nums[i+1]);
      }
  maxiAns=max(maxiAns,maxi-nums[0]);
  maxiAns=max(maxiAns,nums[n-1]-mini);
  return maxiAns;
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