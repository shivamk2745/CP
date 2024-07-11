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
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>nums[i];
             cnt=cnt^nums[i];
        }
        if(n%2==1){
         cout<<cnt<<endl;       
        }
        else if(cnt==0) {cout<<0<<endl;}
        else if(n%2==0){
            cout<<-1<<endl;
        }
    }
    return 0;
}