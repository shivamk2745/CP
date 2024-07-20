#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	     vector<int> ans(n+1);
    for(int i=y;i<=x;i++){
        ans[i]=1;
    }
    int check=-1;
    for(int i=y-1;i>=1;i--){
        ans[i]=check;
        check=-check;
    }
    check=-1;
    for(int i=x+1;i<=n;i++){
        ans[i]=check;
        check=-check;
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
	}

}
