#include <bits/stdc++.h>
using namespace std;
string helper(string& s,string& t,int n){
        for(int i=0;i<n;i++){
            if(s[i]=='0' && t[i]=='1'){
                return "NO";
            }
            if(s[i]=='0' && t[i]=='0') continue;
            else break;
        }
    return "YES";
}
int main() {
     int t;
     cin>>t;
     while (t--) {
        int n;
        cin >> n ;
        string s,t;
        cin>>s>>t;
        cout<<helper(s,t,n)<<endl;
    }
    
    return 0;
}