#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c; 
        vector<int> nums;
        for(int i=a;i>b;i--){
            nums.push_back(i);
        }
        for(int i=1;i<=b;i++){
            nums.push_back(i);
        }
        for(int i=0;i<a;i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }

    return 0;            
}