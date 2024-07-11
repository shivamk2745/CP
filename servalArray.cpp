#include<bits/stdc++.h>
#include <iostream>
using namespace std;
string helper(int n, vector<int>& nums) {
    int flag = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            flag |= __gcd(nums[i], nums[j]) <= 2;
        }
    }
    return (flag) ? "YES" : "NO";
}
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
       cout<<helper(n,nums)<<endl;
    }
    return 0;
}