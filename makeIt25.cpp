#include <bits/stdc++.h>
using namespace std;
string m[]={"00","25","50","75"};
int helper(string& s,string& m){
    int ans=0;
    int t=s.size()-1;
    while(t>=0 && s[t]!=m[1]){
        t--;
        ans++;
    } 
    if(t<0) return INT_MAX;
    t--;
    while(t>=0 && s[t]!=m[0]){
        t--;
        ans++;
    }
    return (t<0) ? INT_MAX:ans;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    string n;
	    cin>>n;
	    int ans=INT_MAX;
	    for(auto mm:m){
	        ans=min(ans,helper(n,mm));
	    }
	    cout<<ans<<endl;
	}
	return 0;

}
