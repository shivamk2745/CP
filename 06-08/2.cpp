#include <bits/stdc++.h>

using namespace std;

int evaluate(int a1, int b1, int a2, int b2) {
    int cnt1 = 0;
    int cnt2 = 0;
    if (a1 > b1) {
        cnt1++;
    } else if (a1 < b1) {
        cnt2++;
    }

    if (a2 > b2) {
        cnt1++;
    } else if (a2 < b2) {
        cnt2++;
    }
    
    if (cnt1 > cnt2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int total = 0;
        total += evaluate(a1, b1, a2, b2);
        total += evaluate(a1, b2, a2, b1);
        total += evaluate(a2, b1, a1, b2);
        total += evaluate(a2, b2, a1, b1);

        cout << total << endl;
    }
    return 0;
}
