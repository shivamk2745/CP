#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
   ll t;
   cin>>t;
   while(t--){
       ll n;
       cin>>n;
       int cnt=0;
           while(n>0){
              cnt+=n/4;
              n=n%4;
              if(n>0){
                  cnt+=n/2;
                  n=n%2;
              }
           }
       cout<<cnt<<endl;
   }
 return  0;
}
