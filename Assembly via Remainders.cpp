#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        
        vector<ll> v2(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> v2[i];
        }

        vector<ll> v(n);
        v[0] = 1;
        ll a = 1;

        for (int i = 1; i < n; i++) {
            a = max(a, v[i - 1] + v2[i - 1]);
            v[i] = a;
        }

        a++;
        cout << a << " ";
        for (int i = 0; i < n - 1; i++) {
            cout << (a + v[i]) << " ";
            a = a + v[i];
        }
        cout << endl;
    }

    return 0;
}
