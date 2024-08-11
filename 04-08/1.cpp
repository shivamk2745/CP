#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int t;
 cin>>t;
 while(t--){
     int n;
     cin>>n;
     string s;
     cin>>s;
     unordered_map<int,int> mpp;
     for(auto num:s){
         if(num!='?') mpp[num]++;
     }
     
     int ans=0;
     for(auto num:mpp){
         if(num.second>n){
             ans+=n;
         }
         else ans+=num.second;
     }
     cout<<ans<<endl;
 }
 return 0;
}
