#include<bits/stdc++.h>
#include <iostream>
using namespace std;
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
       vector<int> a;
       for(int i=0;i<n;i++){
           if(!a.empty() && a.back()>nums[i]){
               a.push_back(1);
           }
           a.push_back(nums[i]);
       }
       cout<<a.size()<<endl;
       for(auto num:a){
           cout<<num<<" ";
       }
       cout<<endl;
    }
    return 0;
}