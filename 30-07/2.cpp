#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<char>> s(2, vector<char>(n));
        for (auto &x : s) {
            for (auto &y : x) {
                cin >> y;
            }
        }
        
        int cnt = 0;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                if (s[i][j] == '.') {
                    if (i == 0) {
                        if (s[i + 1][j] == '.') {
                            if ((j - 1 >= 0 && s[i][j - 1] == '.' && s[i + 1][j - 1] == 'x' ) && (j + 1 < n && s[i + 1][j + 1] == 'x' && s[i][j + 1] == '.')) {
                                cnt++;
                            }
                        }
                    } else {
                        if (s[i - 1][j] == '.') {
                            if ((j - 1 >= 0 && s[i - 1][j - 1] == 'x' && s[i][j - 1] == '.') && (j + 1 < n  && s[i][j + 1] == '.'&& s[i - 1][j + 1] == 'x' )) {
                                cnt++;
                            }
                        }
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
