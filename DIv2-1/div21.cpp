#include<bits/stdc++.h>
#include <iostream>
using namespace std;
string helper(int x1,int y1 ,int x2,int y2){
   if(x1==x2 && y1==y2){
       return "Yes";
   }
   if(x1==x2 && x1<y1) return "Yes";
   if(y1==y2 && x1>y1) return "Yes";
   if(x1>y1 && x2>y2) return "Yes";
   if(x1<y1 && x2<y2) return "Yes";
   return "No";
}
int main() {
     int t;
     cin>>t;
     while (t--) {
       int x1,y1,x2,y2;
       cin>>x1>>y1>>x2>>y2;
       
       cout<<helper(x1,y1,x2,y2)<<endl;
    }
    
    return 0;
}