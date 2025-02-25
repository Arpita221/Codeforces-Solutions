#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<vector<int>> res;

    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<int> ar = {1};

        for (int i = 1; i < n - 1; ++i) {
            int x = abs(a[i] - a[i - 1]);
            int y = abs(a[i] - a[i + 1]);
            if (x > y) {
                ar.push_back(i + 1);
            } else {
                ar.push_back(i - 1);
            }
        }

        ar.push_back(n - 2);
        vector<int> pf(n, 0);
        pf[0] = 0;

        for (int i = 1; i < n; ++i) {
            if (i == ar[i - 1]) {
                pf[i] = pf[i - 1] + 1;
                continue;
            }
            pf[i] = pf[i - 1] + abs(a[i] - a[i - 1]);
        }

        vector<int> sf(n, 0);
        sf[n - 1] = 0;

        for (int i = n - 2; i >= 0; --i) {
            if (i == ar[i + 1]) {
                sf[i] = sf[i + 1] + 1;
                continue;
            }
            sf[i] = sf[i + 1] + abs(a[i] - a[i + 1]);
        }

        int q;
        cin >> q;
        vector<int> qs;

        for (int i = 0; i < q; ++i) {
            int x, y;
            cin >> x >> y;
            x -= 1;
            y -= 1;
            if (y > x) {
                qs.push_back(pf[y] - pf[x]);
            } else {
                qs.push_back(sf[y] - sf[x]);
            }
        }

        res.push_back(qs);
    }

    for (int i = 0; i < res.size(); ++i) {
        for (int j = 0; j < res[i].size(); ++j) {
            cout << res[i][j] << endl;
        }
    }

    return 0;
}
