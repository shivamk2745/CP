#include <bits/stdc++.h>
using namespace std;
int helper(int n,int k,int l,int c,int d,int p,int nl,int np){
   int drink=(k*l)/nl;
   int lime=c*d;
   int salt=p/np;
   int ans=min(drink,min(lime,salt));
    return ans/n;
}
int main() {
    // Write C++ code here
    int n, k, l, c, d, p, nl, np;
    cin >>n;
    cin >>k;
    cin >>l;
    cin >>c;
    cin >>d;
    cin >>p;
    cin >>nl;
    cin>>np;
    cout<<helper(n, k, l, c, d, p, nl, np);
    return 0;
}