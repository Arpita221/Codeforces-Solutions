#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int x,y;
int ans=0;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

       if(n%2==0){
x=v[n/2-1];
y=n/2-1;

       }

else{
    x=v[n/2];
    y=n/2;
}


for(int i=y;i<n;i++){
    if(v[i]==x){
        ans++;
    }
}

cout<<ans<<endl;








    
}
}