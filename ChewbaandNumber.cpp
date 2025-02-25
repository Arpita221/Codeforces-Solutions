#include<bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;
    
    for (int i = 0; i < x.size(); i++) {
        int digit = x[i] - '0';
        int inverted = 9 - digit;
        
        if (i == 0 && digit == 9) {
            cout << digit;
        } else {
            cout << min(digit, inverted);
        }
    }
    cout << endl;

    return 0;
}
