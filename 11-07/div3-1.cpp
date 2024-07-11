#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> nums={a,b,c};
        sort(nums.begin(),nums.end());
        int cnt=5;
        while(cnt>0){
            if(nums[0]<=nums[1] && nums[0]<=nums[2]){
                nums[0]++;
            }
            else if(nums[1]<nums[0] && nums[1]<=nums[2]){
                nums[1]++;
            }
            else{
                nums[2]++;
            }
            cnt--;
        }
        int maxi=nums[0]*nums[1]*nums[2];
        cout<<maxi<<endl;
    }

    return 0;
}