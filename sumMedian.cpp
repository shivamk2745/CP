#include <bits/stdc++.h>
#define ll long long
using namespace std;

       int i;
int main() {
	// your code goes here
   ll t;
   cin>>t;
   while(t--){
       ll n,k;
       cin>>n>>k;
       vector<ll> nums(n*k);
       ll m=n*k;
       for( i=0;i<m;i++) cin>>nums[i];
       ll sum=0;
       for(i=(n-1)/2*k;i<n*k;i+=n/2+1) sum+=nums[i];
       cout<<sum<<endl;
       
   }
 return  0;
}
