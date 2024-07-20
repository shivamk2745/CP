#include <bits/stdc++.h>
using namespace std;
string helper(int n, vector<int>& nums) {
    unordered_map<int,int> mpp;
    for(auto num:nums){
        mpp[num]++;
    }
    bool check=false;
    for(auto n:mpp){
        if(n.second%2==1){
            check=true;
        }
    }
    return (check) ? "YES" : "NO";
}
int main() {
	// your code goes here
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

}
