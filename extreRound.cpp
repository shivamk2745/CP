#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        string ans=to_string(n);
        int m=ans.size();
        for(int i=0;i<m-1;i++){
            cnt+=9;
        }
        int d=ans[0]-'0';
        cout<<cnt+d<<endl;
    }
    return 0;
}