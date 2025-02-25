#include<bits/stdc++.h>
using namespace std;

int main() {
    string s2;
    char c;
    cin >> c >> s2;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string ans;
    int len = s2.length();
    for (int i = 0; i < len; i++) {
        int z = s.find(s2[i]);
        if (c == 'R') {
            ans += s[z - 1];
        } else {
            ans += s[z + 1];
        }
    }
    cout << ans;
    
}
