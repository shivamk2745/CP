#include <bits/stdc++.h>
using namespace std;
string helper(long long n,long long k,long long x){
     long long mini = (long long)k * (k + 1) / 2;
    long long maxi = (long long)k * (2 * n - k + 1) / 2;
    if(x>=mini && x<=maxi) return "YES";
    else return "NO";
}
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
    long long n, k,x;
    cin >>n>>k>>x;
    cout<<helper(n, k, x)<<endl;
    }
    return 0;
}