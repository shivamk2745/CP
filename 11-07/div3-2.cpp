#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> nums(k);
        for(int i=0;i<k;i++){
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        int cnt=0;
        int op=0;
        for(int i=0;i<k-1;i++){
            if(nums[i]==1){
                cnt++;
            }
            else{
                op+=nums[i]-1;
                cnt=cnt+nums[i];
            }
        }
        cout<<cnt+op<<endl;
    }

    return 0;
}