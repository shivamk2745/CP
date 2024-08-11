#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];
        int maxi=0;
        for(int i=0;i<n;i++){
            if(i%2==0) maxi=max(maxi,nums[i]);
        }
        cout<<maxi<<endl;
    }
    return 0;
}
