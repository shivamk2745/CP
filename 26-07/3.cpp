#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while (t--) {
        int n,k;
        cin >> n>>k;
        string a,b;
        cin>>a>>b;
           vector<vector<int>> preA(n + 1, vector<int>(26, 0));
        vector<vector<int>> preB(n + 1, vector<int>(26, 0));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 26; ++j) {
                preA[i + 1][j] = preA[i][j];
                preB[i + 1][j] = preB[i][j];
            }
            preA[i + 1][a[i] - 'a']++;
            preB[i + 1][b[i] - 'a']++;
        }

        while (k--) {
            int l, r;
            cin >> l >> r;
            --l; --r; 

            vector<int> freA(26, 0), freB(26, 0);
            for (int i = 0; i < 26; ++i) {
                freA[i] = preA[r + 1][i] - preA[l][i];
                freB[i] = preB[r + 1][i] - preB[l][i];
            }

            int cnt = 0;
            for (int i = 0; i < 26; ++i) {
                cnt += abs(freA[i] - freB[i]);
            }

            cout << cnt / 2 << endl;

        }
        
      }
    
    
    return 0;
}
