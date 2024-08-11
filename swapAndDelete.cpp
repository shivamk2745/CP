#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.size();
	    vector<int> mpp(2,0);
	    for(int i=0;i<n;i++){
	        mpp[s[i]-'0']++;
	    }
	     for(int i=0;i<=n;i++){
	         if(i==n || mpp[1-(s[i]-'0')]==0){
	             cout<<n-i<<endl;
	             break;
	         }
	         mpp[1-(s[i]-'0')]--;
	     }
	}
return 0;
}
