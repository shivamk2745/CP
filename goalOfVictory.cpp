// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int helper(vector<int>& nums){
   int sum=0;
   for(int i=0;i<nums.size();i++){
       sum+=nums[i];
   }
   return -1*sum;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n-1);
        for(int i=0;i<nums.size();i++){
           cin>>nums[i];
        }
        cout<<helper(nums)<<endl;
    }

    return 0;
}