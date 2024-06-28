// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
int helper(string& s1,string& s2,int n,int m){
    int res=m;
    for(int i=0;i<m;i++){
        int cnt=i;
        int per=i;
        for(int j=0;j<n;j++){
            if(s1[j]==s2[cnt]){
                cnt++;
                if(cnt==m) break;
            }
        }
        res=min(res,per+m-cnt);
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       string s1,s2;
        cin>>s1>>s2;
        int n=s1.size();
        int m=s2.size();
        cout<<n+helper(s1,s2,n,m)<<endl;
    }
    return 0;
}