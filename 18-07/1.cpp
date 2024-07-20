#include <bits/stdc++.h>
using namespace std;

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
        vector<vector<int>> res(n, vector<int>(m));
       if(n==1 && m==1){
           cout<<-1<<endl;
       }
       else if(n==1){
           for(int i=0;i<m;i++){
               res[0][i]=mat[0][(i+1)%m];
               cout<<res[0][i]<<" ";
           }
           cout<<endl;
       }
      else if(m==1){
           for(int i=0;i<n;i++){
               res[i][0]=mat[(i+1)%n][0];
               cout<<res[i][0]<<endl;
           }
      }
      else{
           for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                res[i][j]=mat[i][(j+1)%m];
               cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
      }
    }
    
    return 0;
}