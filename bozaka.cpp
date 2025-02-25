#include <iostream>
#include <vector>
using namespace std;

bool sort(const vector<int>& a) {
    int n = a.size();
    int cnt = 0, pos = -1;
    
    for (int i = 0; i < n; ++i) {
        if (a[i] > a[(i + 1) % n]) {
            cnt++;
            pos = i;
        }
    }
    
    if (cnt == 0) return true;
    
    if (cnt == 1) {
        int start = (pos + 1) % n;
        for (int i = 1; i < n; ++i) {
            if (a[(start + i) % n] < a[(start + i - 1) % n]) return false;
        }
        return true;
    }
    
    return false;
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

        if (sort(a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
