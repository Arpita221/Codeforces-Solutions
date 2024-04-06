#include <iostream>

using namespace std;
using ll = long long;

int32_t main() {
    ll T;
    cin >> T;
    while(T--){
        ll a, b, c;
        cin >> a >> b >> c;
        
        ll d = (3 - b % 3) % 3;
        if (b > 0 && d > c) {
            cout << "-1\n";
        } else {
            c -= d;
            b += d;

            ll ans = a + c / 3 + (c % 3 + 1) / 2 + b / 3;
            cout << ans << '\n';
        }
    }
    return 0;
}
