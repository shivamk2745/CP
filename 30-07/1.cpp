#include <bits/stdc++.h>
using namespace std;

int time(const string &s) {
    if (s.empty()) return 0;
    int t = 2;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            t += 1;
        } else {
            t += 2;
        }
    }
    return t;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int maxt = -1;
        string ans;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            for (int i = 0; i <= s.size(); i++) {
                string new_s = s.substr(0, i) + ch + s.substr(i);
                int newt = time(new_s);
                if (newt > maxt) {
                    maxt = newt;
                    ans = new_s;
                }
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}
