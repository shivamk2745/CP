#include <bits/stdc++.h>

using namespace std;
int n=2*1e5+1;
vector<int> dp(n+1,-1);
int helper(int i){
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    dp[i]=1+helper(i/3);
    return dp[i];
}
int main() {
    int tt;
    cin >> tt;
    
    for(int i=0;i<n;i++){
        helper(i);
    }
    while (tt--) {
      int l,r;
      cin>>l>>r;
      int ans=dp[l]*2;
      for(int i=l+1;i<=r;i++){
          ans+=dp[i];
      }
      cout<<ans<<endl;
    }
    return 0;
}