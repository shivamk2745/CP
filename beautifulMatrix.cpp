#include <bits/stdc++.h>
using namespace std;
int helper(vector<vector<int>>& mat,int n){
    int x=0;
    int y=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          if(mat[i][j]==1){
              x=abs(i-2);
              y=abs(j-2);
          }
        }
    }
    return x+y;
}
int main() {
    // Write C++ code here
    int n=5;
    vector<vector<int>> mat(n,vector<int>(5,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cin>>mat[i][j];
        }
    }
     cout<<helper(mat,n);
    return 0;
}