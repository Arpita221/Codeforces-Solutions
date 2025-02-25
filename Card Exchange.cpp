#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(101, 0);

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            arr[x]++;
        }

        int f = 1;

        for (int i : arr) {
            if (i >= k) {
                cout << k - 1 << endl;
                f = 0;
                break; // Exiting loop once condition is met
            }
        }

        if (f) // Checking if the condition is still true after loop
            cout << n << endl;
    }

   
}