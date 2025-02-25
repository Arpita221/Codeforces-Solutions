#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> v1(n);
    for(int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    cin >> m;
    vector<int> v2(m);
    for(int i = 0; i < m; i++) {
        cin >> v2[i];
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if (abs(v1[i] - v2[j]) <= 1) {
                v2[j] = 1000; 
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;

    
}
