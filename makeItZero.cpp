// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
         if(n&1){
        cout<<"4"<<endl;
        cout<<"1"<<" "<<n-1<<endl;
        cout<<"1"<<" "<<n-1<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<n-1<<" "<<n<<endl;
    }else{
        cout<<"2"<<endl;
        cout<<"1"<<" "<<n<<endl;
        cout<<"1"<<" "<<n<<endl;
    }
    }
    return 0;
}