// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
string helper(int a,int b,int c){
    int new_a=b-(c-b);
    
    if(new_a%a==0 && new_a!=0 && new_a >= a){
       
       return "Yes";
    }
    int new_b=a+(c-a)/2;
    if(new_b%b==0 && (c-a)%2==0 && new_b!=0 && new_b >= b){

       return "Yes";
    }
    int new_c=a+2*(b-a);
    if(new_c%c==0  && new_c!=0 && new_c >= c){
      
       return "Yes";
    }
    return "No";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        cout<<helper(a,b,c)<<endl;
       
    }

    return 0;
}