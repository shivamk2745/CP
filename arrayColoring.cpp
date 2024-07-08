#include<bits/stdc++.h>
#include <iostream>
using namespace std;
string helper(int n,vector<int>& nums){
    int odd=0;
    for(int i=0;i<n;i++){
        if(nums[i]%2==1) odd++;
    }
    if(odd%2==1) return "NO";
    else return "YES";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<nums.size();i++){
            cin>>nums[i];
        }
        cout<<helper(n,nums)<<endl;
    }

    return 0;
}