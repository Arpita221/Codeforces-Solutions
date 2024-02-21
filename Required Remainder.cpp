#include<bits/stdc++.h>
using namespace std;
void solve(){

int x,y,n,k;
cin>>x>>y>>n;

int a=n%x;

if(a-y>=0)k=n-(a-y);
else k=n-a-x+y;

cout<<k<<endl;



}

int main(){

int t;
cin>>t;
while(t--){
    solve();
}


}