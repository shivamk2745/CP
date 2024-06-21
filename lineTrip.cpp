#include <bits/stdc++.h>
using namespace std;
int helper(vector<int>& gas_station,int n_gas,int dest,int start){
    int maxi=0;
    for(int i=0;i<n_gas;i++){
        int ans=abs(gas_station[i]-start);
        maxi=max(maxi,ans);
        start=gas_station[i];
    }
    maxi=max(maxi,abs(gas_station[n_gas-1]-dest)*2);
    return maxi;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n_gas,x;
        cin>>n_gas>>x;
        vector<int> gas_station(n_gas);
        for(int i=0;i<n_gas;i++){
            cin>>gas_station[i];
        }
        cout<<helper(gas_station,n_gas,x,0)<<endl;
    }
    return 0;
}