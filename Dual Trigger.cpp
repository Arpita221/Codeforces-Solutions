#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
    
        
        char s[n]; 
        vector<int>ar;

        
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            if (s[i] == '1') { 
               ar.push_back(i);
            }
        }

        if(ar.size()%2==1||ar.size()==2&&ar[0]==ar[1]-1){
cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
       
    }

    
}
