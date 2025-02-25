#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int f1 = 0; 
        
        char s[n]; 
        
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            if (s[i] == '1') { 
                f1++;
            }
        }
        
        if (n == 2) {
            if (f1 == 2) {
                cout << "NO" << endl; 
            } else {
                cout << "YES" << endl; 
            }
        } else if (f1 % 2 == 0) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl; 
        }
    }

    return 0;
}
