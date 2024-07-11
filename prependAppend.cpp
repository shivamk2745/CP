#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s(n,' ');
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int i=0;
        int j=n-1;
        int cnt=n;
        while(i<j){
            if(s[i]!=s[j]){
                i++;
                j--;
                cnt-=2;
            }else{
                break;
            }
        }
       cout<<cnt<<endl;
    }
    return 0;
}