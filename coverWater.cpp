#include <bits/stdc++.h>
using namespace std;
int helper(string nums,int n){
    int cnt=0;
   for(int i=0;i<n-2;i++){
       if(nums[i]=='.' && nums[i+1]=='.' && nums[i+2]=='.'){
           return 2;
       }
       if(nums[i]=='.'){
           cnt++;
       }
   }
   if(nums[n-2]=='.') cnt++;
   if(nums[n-1]=='.') cnt++;
   return cnt;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string nums;
        cin>>nums;
        cout<<helper(nums,n)<<endl;
    }
    return 0;
}