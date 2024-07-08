#include <bits/stdc++.h>
using namespace std;

void removeExtraChars(string &s, vector<int> &sa, vector<int> &ta) {
    string result = "";
    vector<int> toRemove(26, 0);

    for (int i = 0; i < 26; i++) {
        if (sa[i] > ta[i]) {
            toRemove[i] = sa[i] - ta[i];
        }
    }

    for (char c : s) {
        if (toRemove[c - 'A'] > 0) {
            toRemove[c - 'A']--;
        } else {
            result += c;
        }
    }

    s = result;
}

string helper(string& s, string& t) {
    vector<int> sa(26, 0);
    vector<int> ta(26, 0);

    for (char c : s) {
        sa[c - 'A']++;
    }

    for (char c : t) {
        ta[c - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (sa[i] < ta[i]) {
            return "NO";
        }
    }

    removeExtraChars(s, sa, ta);

    int i = 0, j = 0;
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) {
            j++;
        }
        i++;
    }

    return (j == t.size()) ? "YES" : "NO";
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s, t;
        cin >> s >> t;
        cout << helper(s, t) << endl;
    }
    return 0;
}
