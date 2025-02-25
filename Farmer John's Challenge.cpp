#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;
        vector<int> array;

        if (k == n) {
            for (int j = 0; j < n; ++j)
                array.push_back(1);
        } else if (k == 1) {
            for (int j = 1; j <= n; ++j)
                array.push_back(j);
        } else {
            array.push_back(-1);
        }

        for (int j = 0; j < array.size(); ++j) {
            cout << array[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
