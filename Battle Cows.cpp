#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m, k, ans;

pair<int, int>b[300002];

vector<int> p;

long long c, j;

int main() {
    int t;
    cin >> t;

    while (t--) {
        cin >> n >> m >> k;
        p.clear();

        for (int i = 0; i < n; ++i) {
        b[i].second = i;
            int ingredient;
            cin >> ingredient;
            p.push_back(ingredient);
        }

        sort(b,b + n);

        c = 0;
        j = 0;

        for (int i = 0; i < n; i++) {
            if (k < m) {
                c += k * (j + p[i]);
                j += k;
                k = 0;
            } else {
                c += m * (j + p[i]);
                j += m;
                k -= m;
            }
        }

        cout << '\n';
        cout << c;
    }

    return 0;
}
