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
	   int x=nums[0];
	   for(int i=1;i<n;i++){
	       x=nums[i]&x;
	   }
	   cout<<x<<endl;
	}
return 0;
}
