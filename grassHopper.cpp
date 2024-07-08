#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(x%k!=0){
            cout<<1<<endl;
            cout<<x<<endl;
        }else{
            cout<<2<<endl;
            int j=x-1;
            for(int i=1;i<=x;i++){
                if(i%k==0) continue;
                if(j%k==0) j--;
                if(i%k!=0 && j%k!=0){
                    if(i+j==x){
                    cout<<i<<" "<<j<<endl;
                    }else if(i+j<x){
                        continue;
                    }else{
                        j--;
                    }
                }
            }
        }
    }
    return 0;
}