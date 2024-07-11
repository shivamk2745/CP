#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int helper(int a,int b,int c,int d){
    if(b>d) return -1;
    int y=abs(b-d);
    int cnt=0;
    b+=y;
    a+=y;
    cnt+=y;
    int x=abs(a-c);
    a-=x;
    cnt+=x;
    if(a==c){
        return cnt;
    }else{
        return -1;
    }
    
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<helper(a,b,c,d)<<endl;
    }
    return 0;
}