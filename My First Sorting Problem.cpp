#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x,y;
        cin>>x>>y;
        
        
        if(x>y)
            swap(x, y);
cout<<x<<" "<<y<<endl;
        
}
}