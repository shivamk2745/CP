#include <bits/stdc++.h>
using namespace std;
#define int long long
const int M = 1e9 + 7;
const int N = 2e5 + 1;
vector<int> fact(N + 1, 1);

int binaryexponential(int no, int po) {
    int ans = 1;
    while (po) {
        if (po & 1) {
            ans = (ans * no) % M;
        }
        no = (no * no) % M;
        po >>= 1;
    }
    return ans;
}

int ncr(int n, int r) {
    if (r < 0 || n < 0 || n < r) return 0;
    int value = (fact[r] * fact[n - r]) % M;
    int ans = (fact[n] * binaryexponential(value, M - 2)) % M;
    return ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 1; i <= N; ++i) {
        fact[i] = (fact[i - 1] * i) % M;
    }

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> pre(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            pre[i + 1] = pre[i] + a[i];
        }

        int hl = k / 2;
        int ans = 0;
        int zero = n - pre[n];

        for (int i = 0; i < n; ++i) {
            if (a[i] == 1) {
                int pre_no = zero + pre[i];
                int p_one = pre[n] - pre[i + 1];
                int value = (ncr(pre_no, hl) * ncr(p_one, hl)) % M;
                ans = (ans + value) % M;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
