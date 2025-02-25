#include <bits/stdc++.h>

using namespace std;

void solve() {
    int t; 
    cin >> t; 

    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int favorite_value = a[f - 1]; 
        sort(a.rbegin(), a.rend()); 

        int count_above = 0; 
        int count_equal = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] > favorite_value) {
                count_above++;
            } else if (a[i] == favorite_value) {
                count_equal++;
            } else {
                break;
            }
        }

        
        if (count_above >= k) {
            cout << "NO\n"; 
        } else if (count_above + count_equal <= k) {
            cout << "YES\n"; 
        } else {
            cout << "MAYBE\n"; 
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
