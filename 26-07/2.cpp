#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while (t--) {
        int n,k;
        cin >> n>>k;
        vector<vector<char>> mat(n, vector<char>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> mat[i][j];
            }
        }
        int m=n/k;
        vector<vector<char>> res(m, vector<char>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                    res[i/k][j/k]=mat[i][j];
            }
        }
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j <m; ++j) {
              cout<<res[i][j];
            }
            cout<<endl;
        }
        
      }
    
    
    return 0;
}
