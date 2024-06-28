#include<bits/stdc++.h>
#include <iostream>
using namespace std;
string helper(int n, int k, string& s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    int odd_count = 0;
    for (auto& p : freq) {
        if (p.second % 2 == 1) {
            odd_count++;
        }
    }
    if (odd_count <= k + 1) {
        return "YES";
    } else {
        return "NO";
    }
}
int main() {
     int t;
     cin>>t;
     while(t--){
         int n,k;
         cin>>n>>k;
         string s;
         cin>>s;
         cout<<helper(n,k,s)<<endl;
     }

    return 0;
}




