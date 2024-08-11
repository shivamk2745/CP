#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> nums(n);
	    for(int i=0;i<n;i++) cin>>nums[i];
	    if(k==2 || k==3 || k==5){
	        int cnt=0;
	        int maxi=0;
	       for(int i=0;i<n;i++){
	           maxi=max(maxi,nums[i]%k);
	           if(nums[i]%k==0){
	               cout<<0<<endl;
	               cnt++;
	               break;
	           }
	       }
	       if(!cnt){
	           cout<<k-maxi<<endl;
	       }
	    }
	    else{
	        int cnt=0;
	        int maxi=0;
	        int even=0;
	        for(int i=0;i<n;i++){
	            maxi=max(maxi,nums[i]%k);
	            if(nums[i]%2==0) even++;
	            if(nums[i]%k==0){
	                cout<<0<<endl;
	                cnt++;
	                break;
	            }
	        }
	        if(!cnt){
	            if(even >= 2) {
                    cout << 0 << endl;
                } else if (even == 1) {
                    cout << 1 << endl;
                } else {
                    cout<<min(k-maxi,2)<< endl;
                }
	        }
	    }
	}
return 0;
}
