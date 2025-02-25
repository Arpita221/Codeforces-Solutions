#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool isBeautiful(const vector<int>& a) {
    int n = a.size();
    int arrayGCD = a[0];
    
    for (int i = 1; i < n; ++i) {
        arrayGCD = gcd(arrayGCD, a[i]);
    }
    
    if (arrayGCD > 1) return true;
    
    int min1 = INT_MAX, min2 = INT_MAX;
    for (int x : a) {
        if (x < min1) {
            min2 = min1;
            min1 = x;
        } else if (x < min2 && x != min1) {
            min2 = x;
        }
    }
    
    for (int x : a) {
        if (x % min1 != 0 && x % min2 != 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (isBeautiful(a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
