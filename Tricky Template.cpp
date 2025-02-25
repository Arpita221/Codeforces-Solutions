#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a, b, c;
        cin >> a >> b >> c;

     //  int flag=1;
     int count =0;

       for(int i=0;i<n;i++){

        if ((a[i] == c[i]||b[i]== c[i]) ){
            count ++;
        }





       }




        if (count ==n) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

}