#include <bits/stdc++.h>
using namespace std;
string helper(vector<int>& arr,int n){
    if(n==2) return "Yes";
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    if(mpp.size()>=3) return "No";
    if(abs(mpp.begin()->second - mpp.rbegin()->second)<=1){
        return "Yes";
    }else{
        return "NO";
    }
     
}
int main() {
    int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<int> arr(n);
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       cout<<helper(arr,n)<<endl;
   } 
    return 0;
}


