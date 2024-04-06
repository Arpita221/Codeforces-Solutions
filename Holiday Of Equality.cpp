#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nm(n);
    cin >> nm[0];
    int mx = nm[0];
    for (int i = 1; i < n; ++i) {
        cin >> nm[i];
        if (nm[i] > mx) {
            mx = nm[i];
        }
    }

    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += mx - nm[i];
    }

    cout<< ans <<endl;

    return 0;
}
