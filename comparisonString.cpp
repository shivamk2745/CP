// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int helper(int n,string& s){
    int maxi=0;
    int i=0;
    int j=0;
    while(j<n){
        if(s[i]!=s[j]){
            i=j;
        }
        maxi=max(maxi,j-i+1);
        j++;
    }
    return maxi+1;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        cout<<helper(n,s)<<endl;
    }

    return 0;
}