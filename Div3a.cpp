// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
string helper(int x,int y){
   if(y<-1) return "NO";
   else return "YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,y1;
        cin>>x1>>y1;
        cout<<helper(x1,y1)<<endl;
    }
    return 0;
}