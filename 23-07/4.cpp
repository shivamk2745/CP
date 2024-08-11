#include <bits/stdc++.h>
using namespace std;

bool isDecreasing(vector<long long>& nums) {
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i - 1] <= nums[i]) return false;
    }
    return true;
}

long long minActions(vector<long long>& nums) {
    int n = nums.size();
    if (isDecreasing(nums)) {
        return (long long)n * (n - 1) / 2;
    }
    
    long long actions = 0;

    for (int i = 1; i < n; i++) {
        if (nums[i] == 1 && nums[i - 1] > 1) {
            return -1;
        }
    }

    for (int i = 1; i < n; i++) {
        if (nums[i] < nums[i - 1]) {
            long long a = nums[i];
            long long b = nums[i - 1];
            int requiredMultiplications = 0;

            while (a <= b && requiredMultiplications < 60) {
                a *= nums[i];
                requiredMultiplications++;
                actions++;
                if (a > 1e18) {
                    return -1;
                }
            }

            if (a <= b) {
                return -1;
            }

            nums[i] = a;
        }
    }

    return actions;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        cout << minActions(nums) << endl;
    }
    return 0;
}
