// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int helper(int i,int j,vector<vector<int>>& mat,int n,int m){
    int curr=mat[i][j];
    int maxi=INT_MIN;
    if (i > 0) maxi = max(maxi, mat[i-1][j]); 
    if (i < n - 1) maxi = max(maxi, mat[i+1][j]); 
    if (j > 0) maxi = max(maxi, mat[i][j-1]); 
    if (j < m - 1) maxi = max(maxi, mat[i][j+1]);
    
    if((i==0 || curr > mat[i-1][j]) && (i==n-1 || curr > mat[i+1][j]) && (j==m-1 || curr > mat[i][j+1]) && (j==0 ||curr > mat[i][j-1]))
    {
        curr=maxi;
    }
    return curr;
}
vector<vector<int>> solve(int n,int m,vector<vector<int>>& mat) {
    vector<vector<int>> res(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          res[i][j]=helper(i,j,mat,n,m);
        }
    }
   return res;
}
int main() {
     int t;
     cin>>t;
     while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> mat[i][j];
            }
        }

        vector<vector<int>> result = solve(n, m, mat);

        for (const auto& row : result) {
            for (const auto& elem : row) {
                cout << elem << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}