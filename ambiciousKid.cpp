// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   vector<int> nums(n);
   for(int i=0;i<n;i++){
       cin>>nums[i];
   }
   int mini=INT_MAX;
   for(int i=0;i<n;i++){
       mini=min(mini,abs(nums[i]));
   }
cout<<mini;
    return 0;
}