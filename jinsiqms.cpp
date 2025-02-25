#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
          
        }

        sort(a.begin(), a.end());

        long long count = 0;

        for (int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = i + 2;

           
            while (k < n && a[i] + a[j] <= a[k]) {
                j++;
                k++;
            }
            count += max(0, k - j - 1);
        }

        cout << count << endl;
    }

    return 0;
}
