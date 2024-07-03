#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        long long mini=1;
        long long maxi=1;
        cin>>n;
        if(n%2==1 || n<4) {cout<<-1<<endl;}
        else{
         if(n%6==2 || n%6==4){
           mini=(n/6)+1;
       }
       else if(n%6==0){
           mini=n/6;
       }
       if(n>=4){
           maxi=n/4;
           cout<<mini<<" "<<maxi<<endl;
       }
        }
       
    }
    return 0;
}