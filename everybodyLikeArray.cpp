#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int ans=0;
        for(int i=0;i+1<n;i++) {
            ans+=(!((a[i]^a[i+1])&1));
        }
        cout<<ans<<"\n";
    }
    return 0;
}