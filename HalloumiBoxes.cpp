#include <bits/stdc++.h>
using namespace std;
string helper(vector<int>& arr,int n,int rev){
    if(rev==1){
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]) return "NO";
        }
    }
    return "YES";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, rev;
        cin >> n >> rev;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << helper(arr, n, rev) << " ";
    }
    return 0;
}