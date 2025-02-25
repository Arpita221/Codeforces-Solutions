#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string solve(string s) {
    string original = s;
    sort(s.begin(), s.end());

    if (s[0] == s[s.size() - 1]) {
        if (next_permutation(s.begin(), s.end())) {
            return "YES\n" + s;
        } else {
            return "NO";
        }
    }

    if (original == s) {
        if (next_permutation(s.begin(), s.end())) {
            return "YES\n" + s;
        } else {
            return "NO";
        }
    }

    return "YES\n" + s;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }

    return 0;
}
