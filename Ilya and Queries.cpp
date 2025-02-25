#include<bits/stdc++.h>
using namespace std;
int main(){

string s;
cin>>s;
int m;
 vector<int> a(s.size() + 1, 0);
    int k = 0;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            ++k;
        }
        a[i + 1] = k;
    }
    
    
    cin >> m;
    vector<int> l(m), r(m);
    for (int i = 0; i < m; ++i) {
        cin >> l[i] >> r[i];
    }
    
    for (int i = 0; i < m; ++i) {
        cout << a[r[i]] - a[l[i]] << endl;
    }
    
    return 0;
}










