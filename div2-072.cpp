#include<bits/stdc++.h>
#include <iostream>
using namespace std;
string helper(int n,int m,vector<vector<int>>& a,vector<vector<int>>& b){
    vector<int> a1;
    vector<int> b1;
     vector<int> a2;
    vector<int> b2;
    for(int i=0;i<m;i++){
        int sum=0;
         for(int j=0;j<n;j++){
             sum+=a[j][i];
        }
        a1.push_back(sum%3);
    }
    for(int i=0;i<m;i++){
        int sum=0;
         for(int j=0;j<n;j++){
          sum+=b[j][i];
        }
        b1.push_back(sum%3);
    }
    for(int i=0;i<n;i++){
        int sum=0;
         for(int j=0;j<m;j++){
             sum+=a[i][j];
        }
        a2.push_back(sum%3);
    }
    for(int i=0;i<n;i++){
        int sum=0;
         for(int j=0;j<m;j++){
          sum+=b[i][j];
        }
        b2.push_back(sum%3);
    }
    if(a1==b1 && a2==b2){
        return "YES";
    }else{
        return "NO";
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int>(m,0));
       vector<vector<int>> b(n,vector<int>(m,0));
      for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char ch;
                cin >> ch;
                a[i][j] = ch - '0';
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char ch;
                cin >> ch;
                b[i][j] = ch - '0';
            }
        }
      cout<<helper(n,m,a,b)<<endl;
    }

    return 0;
}
