#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, st;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'|| s[i] =='y') {
            s.erase(i, 1); 
            i--; 
        }
    }

    st = s;
    for (int i = 0; i < st.size(); i++) {
        st[i] = tolower(st[i]);
    }

    for (int i = 0; i < st.size(); i++) {
        cout << "." << st[i]; 
    }
    cout << endl;

    
}
