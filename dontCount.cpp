#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    string original_x = x;  // Store the original value of x
    
    for (int i = 0; i <= 5; ++i) {
        if (x.find(s) != string::npos) {
            cout << i << endl;
            return;
        }
        x += original_x;  // Concatenate the original value of x
    }

    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}