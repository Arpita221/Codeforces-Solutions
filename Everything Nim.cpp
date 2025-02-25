#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    for (int tc = 0; tc < test_cases; tc++) {
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        sort(arr.begin(), arr.end());

        int m = 0;
        int i = 0;
        for (i = 0; i < n; i++) {
            if (arr[i] - m > 1) {
                break;
            }
            m = arr[i];
        }

        if (i == n) {
            if (mp.size() % 2 == 0) {
                cout << "Bob" << endl;
            } else {
                cout << "Alice" << endl;
            }
        } else if (n == 1 || i % 2 == 0 || mp.size() == 1) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }

    return 0;
}
