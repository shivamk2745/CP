#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    long long m;
	    cin>>n>>m;
	    vector<int> nums(n);
	    for(int i=0;i<n;i++){
	        cin>>nums[i];
	    }
	    long long sum = 0;
        sort(nums.begin(), nums.end());
        long long maxi = 0;
        int left = 0;
        int right=0;
        while(right < n) {
            sum += nums[right];
            while (sum > m || (right > left && abs(nums[right] - nums[left]) > 1)) {
                sum -= nums[left];
                left++;
            }
            maxi = max(maxi, sum);
            right++;
        }
        cout << maxi << endl;
	}

}
