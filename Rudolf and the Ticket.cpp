#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

int n,m,k;
cin>>n>>m>>k;

int count =0;

vector<int>v1(n);
vector<int>v2(m);
for(int i=0;i<n;i++){cin>>v1[i];}
for(int i=0;i<m;i++){cin>>v2[i];}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(v1[i]+v2[j]<=k){
            count ++;
        }
    }
}




cout<<count<<endl;





}











}
