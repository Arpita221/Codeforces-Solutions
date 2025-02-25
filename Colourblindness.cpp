#include <bits/stdc++.h>

using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

int main() {
	


	int t;
	cin >> t;
	for (int k = 1; k <= t; k++) {
		int n;
		cin >> n;
		string s, t;
		cin >> s >> t;
		bool flag = true;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'R') {
				if (t[i] != 'R') {
					flag = false;
					break;
				}
			} else {
				if (t[i] == 'R') {
					flag = false;
					break;
				}
			}
		}
		if (flag) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}
