#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int helper(int n,int m ,vector<vector<char>>& mat){
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if(mat[i][j]=='X'){
           int dist = min({i, j, n - i - 1, m - j - 1});
                    cnt += (dist + 1);
        }
    }
    }
    return cnt;
}
int main() {
     int t;
     cin>>t;
     while (t--) {
        int n=10, m=10;
        vector<vector<char>> mat(n, vector<char>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> mat[i][j];
            }
        }

       cout<<helper(n,m,mat)<<endl;
    }
    
    return 0;
}