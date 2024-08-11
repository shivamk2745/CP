#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    vector<long long> nums(n);
	    for(int i=0;i<n;i++) cin>>nums[i];
	    long long last=0;
	    long long ans=0;
	    for(int i=1;i<n;i++){
	        long long cnt1=0;
	        long long cnt2=0;
	        long long curr=nums[i];
	        long long prev=nums[i-1];
	    if(curr==1 && prev>1){
	        ans=-1;
	        break;
	    }
	        
	        while(prev>curr){
	            curr*=curr;
	            cnt1++;
	        }
	        while(prev*prev<=curr){
	            if(prev==1){
	                cnt2=-1;
	                break;
	            }
	            prev*=prev;
	            cnt2++;
	        }
	        if(cnt1){
	            last+=cnt1;
	        }
	        else if(cnt2==-1){
	            last=0;
	        }else{
	            last=max(0LL,last-cnt2);
	        }
	        ans+=last;
	    }
	    cout<<ans<<endl;
	}
return 0;
}
