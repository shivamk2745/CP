#include<bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int> helper(int n,vector<int>& nums){
 for(int i=0;i<n;i++){
     if(nums[i]==1){
         nums[i]++;
     }
 }
  for(int i=1;i<n;i++){
      if(nums[i]%nums[i-1]==0){
          nums[i]++;
      }
  }
  return nums;
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
        vector<int> ans=helper(n,nums);
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}