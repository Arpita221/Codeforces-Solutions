#include <iostream>
#include <cmath>

using namespace std;

bool prime(int n) {
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = n + 1; i <= m; i++) {
        if (prime(i)) {
            if (i == m) {
                cout << "YES\n";
                return 0;
            } else {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "NO\n";

    
}
