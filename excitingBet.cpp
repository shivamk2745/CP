#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long a,b;
	    cin>>a>>b;
	    if(a==b) cout<<0<<" "<<0<<endl;
	    else{
	        long long res=abs(a-b);
	        long long mini=min(a%res,res-a%res);
	        cout<<res<<" "<<mini<<endl;
	    }
	   
	}
return 0;
}
