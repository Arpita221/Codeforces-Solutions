#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int c1 = 0, c2= 0;
        string s;
        cin >> s;
        int ans;
     
        for (int i = 0; i <= n - 3; i++) {
            string y = s.substr(i, 3);
            if (y == "map" || y == "pie") {
                c1++;
            }
        }

       
        for (int i = 0; i <= n - 5; i++) {
            if (s.substr(i, 5) == "mapie") {
                c2++;
            }
        }

        ans=c1-c2;
        cout <<ans  << endl;
    }
    
}
