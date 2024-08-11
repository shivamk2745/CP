#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        int maxi=0;
        int mini=INT_MAX;
        for (int i = 0; i < n ; i++) {
            cin >> nums[i];
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        int k=0;
        int res[100];
        for(k=0;k<=40;k++){
            if(maxi==0 && mini==0) break;
            int ans=(maxi+mini)/2;
            res[k]=ans;
            maxi=0;
            mini=INT_MAX;
            for(int i=0;i<n;i++){
                nums[i]-=ans;
                if(nums[i]<0) nums[i]=-nums[i];
                if(nums[i]<mini) mini=nums[i];
                if(nums[i]>maxi) maxi=nums[i];
            }
        }
        if(k>=41){
            cout<<-1<<endl;
        }
        else{
            cout<<k<<endl;
            for(int i=0;i<k;i++){
                cout<<res[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
