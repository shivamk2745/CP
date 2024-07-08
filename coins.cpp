#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        bool possible = false;
        
        for (int x = 0; x < 2; ++x) {
            if (n - x * k >= 0 && (n - x * k) % 2 == 0) {
                possible = true;
                break;
            }
        }
        
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
