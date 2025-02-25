#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){

int n,k;
cin>>n>>k;
vector<int>v(101,0);
for(int i=0;i<n;i++){
int x;
cin>>x;
v[x]++;



}

int count =1;

for(int i=0;i<v.size();i++){
    if(v[i]>=k){
        cout<<k-1<<endl;
        count =0;
        break;
    }
}
if(count){
    cout<<n<<endl;
}





















}




















}