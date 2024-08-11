#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
   ll t;
   cin>>t;
   while(t--){
       ll n,x;
       cin>>n>>x;
       vector<int> nums(n);
       for(int i=0;i<n;i++) cin>>nums[i];
       
       ll mini=0;
       ll maxi=0;
       for(int i=0;i<n;i++){
           mini+=nums[i];
           ll res=ceil(static_cast<double>(nums[i])/x);
           maxi+=res;
       }
      cout<<(long long) ceil(static_cast<double>(mini)/x)<<" "<<maxi<<endl;
   }
 return  0;
}
