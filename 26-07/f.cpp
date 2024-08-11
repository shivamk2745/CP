#include <bits/stdc++.h>
// #define int long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        priority_queue<pair<int, int>> q;
        for (int i = 0; i < n; i++) {
            q.push({a[i], i});
        }
        long long cnt = 0;
        while (k-- && !q.empty()) {
            auto [currMax, idx] = q.top();
            q.pop();
            cnt += currMax;
            int update = max(0, currMax - b[idx]);
            if (update > 0) {
                q.push({update, idx});
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
