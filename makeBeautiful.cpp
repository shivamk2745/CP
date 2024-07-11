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
        if(nums[0]==nums[n-1]){
             cout<<"NO"<<endl;
        } 
        else{
             cout<<"YES"<<endl;
             cout<<nums[0];
             for(int i=n-1;i>0;i--){
                 cout<<" "<<nums[i];
             }
            cout<<endl;
        } 
    }
    return 0;
}