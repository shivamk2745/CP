#include<bits/stdc++.h>
#include <iostream>
using namespace std;

bool helper(const string &nums, int n, int m, int k) {
    vector<bool> visited(n + 2, false);
    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0] = true;

    while (!q.empty()) {
        int pos = q.front().first;
        int sd = q.front().second;
        q.pop();

        if (pos == n + 1) {
            return true;
        }

        if (pos == 0 || nums[pos - 1] == 'L') {
            for (int i = 1; i <= m; ++i) {
                int new_pos = pos + i;
                if (new_pos >= n + 1) new_pos = n + 1;
                if (new_pos <= n && nums[new_pos - 1] == 'C') continue; 
                if (!visited[new_pos]) {
                    visited[new_pos] = true;
                    q.push({new_pos, sd});
                }
            }
        }

        if (pos != n + 1 && sd < k && nums[pos] != 'C') {
            int new_pos = pos + 1;
            if (!visited[new_pos]) {
                visited[new_pos] = true;
                q.push({new_pos, sd + 1});
            }
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string nums;
        cin >> nums;
        
        if (helper(nums, n, m, k)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}