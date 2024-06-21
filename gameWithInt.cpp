#include <bits/stdc++.h>
using namespace std;
string helper(int n){
if(n%3==0) return "Second";
else return "First";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<helper(n)<<endl;
    }
    return 0;
}