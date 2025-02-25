#include<bits/stdc++.h>
using namespace std;
int main(){

int n,k;
cin>>n>>k;
int count=0;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
 for(int i=0;i<n;i++){
    if(5-v[i]>=k)
    count++;
 }

int ans=count/3;
cout<<ans<<endl;

















}