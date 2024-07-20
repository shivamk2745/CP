#include <bits/stdc++.h>
using namespace std;

int calculateSum(const vector<int>& nums) {
    return accumulate(nums.begin(), nums.end(), 0);
}

int MAD(const unordered_map<int, int>& freq) {
    int maxi = 0;
    for (auto& [num, count] : freq) {
        if (count >= 2) {
            maxi = max(maxi, num);
        }
    }
    return maxi;
}

int helper(int n, vector<int>& nums) {
    int totalSum = 0;

    while (true) {
        int currentSum = calculateSum(nums);
        totalSum += currentSum;

        if (currentSum == 0) break;

        vector<int> b(n, 0);
        unordered_map<int, int> freq;
        
        freq[nums[0]]++;
        b[0] = MAD(freq);

        for (int i = 1; i < n; ++i) {
            freq[nums[i]]++;
            b[i] = MAD(freq);
        }

        nums = b;
    }

    return totalSum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        cout << helper(n, nums) << endl;
    }

    return 0;
}
