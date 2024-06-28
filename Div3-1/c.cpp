#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define rip(i,s,e) for (int i = s; i < e; i++)
#define quicky ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define input(v,SIZE) vector < ll > v; for(int z = 0; z < SIZE ; z++){int x; cin >> x; v.push_back(x);}
#define int long long
typedef long long ll;
#define Endl endl

void solve(){
    int n,m;
    cin >> n >> m;
    string s,a;
    cin >> s;
    set < int > st;
    rip(i,0,m){
        int x;
        cin >> x;
        st.insert(x);
    }
    vector < int > v;
    for(auto i : st) v.push_back(i);
    cin >> a;
    sort(all(v));  // 1 2 4
    sort(all(a));  // c w z z
    rip(i,0,v.size()){
        s[v[i]-1] = a[i];
    }
    cout<<s<<endl;
}

signed main(){
   quicky
   int t = 1;
   cin >> t;
   while(t--) solve();
} 