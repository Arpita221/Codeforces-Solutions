#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        for (int i = n; i >= k;i--) {
            cout << i << " ";
        }

        for (int i = m+1; i < k; i++) {
            cout << i << " ";
        }

        for(int i=1;i<=m;i++){
            cout<<i<<" ";
        }
        cout<<" "<<endl;
    }

    return 0;
}
