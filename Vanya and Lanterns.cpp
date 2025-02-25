#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int d = 2 * max(v[0], l - v[n - 1]);
    for (int i = 0; i < n - 1; i++) {
        d = max(d, v[i + 1] - v[i]);
    }
//cout<<d<<endl;
    
    cout << fixed << setprecision(10) << d / 2.0 << endl;

    return 0;
}
