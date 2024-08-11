#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>  nums(n);
	    for(int i=0;i<n;i++){
	        cin>>nums[i];
	    }
	    int cnt1=0;
	    int cnt0=0;
	    for(int i=0;i<n;i++){
	        if(nums[i]==1){
	            cnt1++;
	        }
	         if(nums[i]==0){
	            cnt0++;
	        }
	    }
	    cout<<((long long)1<<cnt0)*(long long)cnt1<<endl;
	}
return 0;
}
