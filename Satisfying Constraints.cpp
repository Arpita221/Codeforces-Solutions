#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        long long int ans = 0;

        vector<long long> mp;
        long long int mor = INT_MIN;
        long long int les = INT_MAX;
        bool fi = false;

        for (long long int i = 0; i < n; i++) {
            cin >> a[i];
            cin >> b[i];
        }

        for (long long int i = 0; i < n; i++) {
            if (a[i] == 1) {
                mor = max(mor, b[i]);
            } else if (a[i] == 2) {
                les = min(les, b[i]);
            } else {
                if (a[i] == 3) {
                    mp.push_back(b[i]);
                }
            }
        }

        if (mor > les) {
            cout << 0 << endl;
            continue;
        }

        set<long long int> ss;
        while (mp.size() != 0) {
            long long cc = mp.back();
            mp.pop_back();
            if (cc >= mor && cc <= les) {
                ss.insert(cc);
            }
        }

        ans = les - mor + 1 - ss.size();
        cout << ans << endl;
    }

    return 0;
}
