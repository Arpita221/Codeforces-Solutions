#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
const int MOD = 1e9 + 7;
 
signed main(){

    int t; cin >> t;
 
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int>v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
 
        int ans = 0, cur = 0;
 //kadanes algo
        for(int i = 0; i < n; i++) {
            cur += v[i];
            ans = max(ans, cur);
            cur = max(cur, 0ll);
        }
 
        int finans = (accumulate(v.begin(), v.end(), 0ll) % MOD + MOD) % MOD;
 
        for(int i = 0; i < k; i++) {
            finans = (finans + ans) % MOD;
            ans = (ans * 2) % MOD;
        }
 
        cout << finans << "\n";
    }
}
