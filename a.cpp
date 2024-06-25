#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int helper(int n1, int n2, int n3) {
    vector<int> nums={n1,n2,n3};
    sort(nums.begin(),nums.end());
    int maxi=nums[2];
    int mini=nums[0];
    int a=nums[1];
    if(maxi==mini) return 0;
    int ans=abs(n1-a)+abs(n2-a)+ abs(n3-a);
    return ans;
}
int main() {
     int t;
     cin>>t;
     while(t--){
         int n1,n2,n3;
         cin>>n1>>n2>>n3;
         cout<<helper(n1,n2,n3)<<endl;
     }

    return 0;
}