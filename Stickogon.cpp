#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum = 0;
        cin >> n;
        vector<int> v(101, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v[x]++;
        }
        for (int i = 0; i < v.size(); i++) {
            sum += v[i] / 3;
        }
        cout << sum << endl;
    }
    
}
