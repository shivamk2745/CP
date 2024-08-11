#include <bits/stdc++.h>

using namespace std;
string helper(vector<vector<int>>&  nums,int n,int s,int m){
    int curr_start=nums[0][0];
       if(curr_start>=s){
           return "YES";
       }
       
    int curr_end=nums[0][1];
       for(int i=0;i<n;i++){
           if(nums[i][0]>curr_end){
               if(nums[i][0]-curr_end>=s){
                   return "YES";
               }
           }
           curr_end=max(curr_end,nums[i][1]);
       }
       if(m-curr_end>=s){
          return "YES";
       }
       return "NO";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
       int n,s,m;
       cin>>n>>s>>m;
       vector<vector<int>> nums(n,vector<int>(2,0));
       int l,r;
       for(int i=0;i<n;i++){
           cin>>l>>r;
           nums[i][0]=l;
           nums[i][1]=r;
       }
       sort(nums.begin(),nums.end());
       cout<<helper(nums,n,s,m)<<endl;
    //   for(int i=0;i<n;i++){
    //       cout<<nums[i][0]<<" ";
    //   }
    }
    return 0;
}