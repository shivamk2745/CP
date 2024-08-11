#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n<=5){
	        cout<<(n+2)/2<<endl;
	        if(n==1) cout<<"1"<<endl;
	        else if(n==2) cout<<"1 2"<<endl;
	        else if(n==3) cout<<"1 2 2"<<endl;
	        else if(n==4) cout<<"1 2 2 3"<<endl;
	        else if(n==5) cout<<"1 2 2 3 3"<<endl;
	    }else{
	        cout<<4<<endl;
	        for(int i=0;i<n;i++){
	            cout<<(i%4)+1<<" ";
	        }
	        cout<<endl;
	    }
	}
return 0;
}
