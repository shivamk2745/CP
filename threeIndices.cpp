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
	    for(int i=0;i<n;i++) cin>>nums[i];
	    vector<int> ans;
	    for(int i=1;i<n-1;i++){
	        if(nums[i]>nums[i-1] &&  nums[i]>nums[i+1]){
	            ans.push_back(i-1+1);
	            ans.push_back(i+1);
	            ans.push_back(i+1+1);
	            break;
	        }
	    }
	    if(ans.size()>0){
	        cout<<"YES"<<endl;
	        for(auto num:ans){
	            cout<<num<<" ";
	        }
	        cout<<endl;
	    }
	    else cout<<"NO"<<endl;
	}

}
