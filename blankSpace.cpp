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
        int len=0;
        int i=0;
        int j=0;
        while(j<n){
            if(nums[i]==0 && nums[j]==0){
                len=max(len,j-i+1);
                j++;
            }
            else if(nums[i]!=0){
                i++;
                j++;
            }
            else if(nums[j]!=0){
                i=j;
            }
        }
        cout<<len<<endl;
    }
    return 0;
}