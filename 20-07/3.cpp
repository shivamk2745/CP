#include <bits/stdc++.h>
using namespace std;
long long helper(long long n, vector<long long>& nums) {
unordered_map<long long, long long> mpp;
    long long sum=0;
    for(long long j=0;j<2;j++){
    for(long long i=0;i<n;i++){
        sum+=nums[i];
    }
    long long cnt = 0;
     for (long long i = 0; i < n; i++) {
            mpp[nums[i]]++;
            if (mpp[nums[i]] == 2) {
                cnt = max(nums[i], cnt);
            }
            nums[i] = cnt;
        }
    mpp.clear();
    }
    long long total=sum;
    for(long long i=0;i<n;i++){
        long long a=nums[i];
        long long b=n-i;
        long long mul=a*(b);
        total+=mul;
    }
    return  total;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> nums(n);
        for (long long i = 0; i < n; i++) {
            cin >> nums[i];
        }
        cout << helper(n, nums) << endl;
    }

    return 0;
}
