#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int cnt=0;
	    if(k>0){
	        k=k-n;
	        cnt++;
	    }
	    n--;
	   while(k>0){
	       cnt++;
	       k=k-n;
	       if(k>0){
	             k=k-n;
	             cnt++;
	        }
	        n=n-1;
	   }
	    cout<<cnt<<endl;
	}

}
