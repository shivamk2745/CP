#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        stack<int> st;
        st.push(-1);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '_') {
                if (!st.empty() && st.top() != -1) {
                    int tp = st.top();
                    st.pop();
                    ans += i - tp;
                }
                else {
                    st.push(i);
                }
            } else if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                if (!st.empty()) {
                    int tp = st.top();
                    st.pop();
                    ans += i - tp;
                } else {
                    st.push(i);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
