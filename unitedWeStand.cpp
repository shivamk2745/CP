// Online C++ compiler to run C++ program online
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
       vector<int> b;
       vector<int> c;
       sort(nums.begin(),nums.end());
       int fir=nums[0];
      for(int i=0;i<n;i++){
          if(nums[i]==fir){
              b.push_back(nums[i]);
          }
          else{
              c.push_back(nums[i]);
          }
      }
      if(b.size()>0 && c.size()<=0) cout<<-1<<endl;
      else{
          cout<<b.size()<<" "<<c.size()<<endl;
          for(auto num:b){
              cout<<num<<" ";
          }
          cout<<endl;
          for(auto num:c){
              cout<<num<<" ";
          }
          cout << endl;
      }
    }
    return 0;
}