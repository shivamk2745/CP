#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }

        vector<int> a;
        a.push_back(b[0]);
        for (int i = 1; i < n - 1; i++) {
            a.push_back(b[i - 1] | b[i]);
        }
        a.push_back(b[n - 2]);

        vector<int> check(n - 1);
        for (int i = 0; i < n - 1; i++) {
            check[i] = a[i] & a[i + 1];
        }

        if (check == b) {
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
