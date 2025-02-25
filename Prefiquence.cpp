#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
 int n,m;
 cin>>n>>m;
string a,b;
cin>>a>>b;

int k=0,j=0;

for(int i=0;i<n;i++){
int p=b.find(a[i],j);
if(p!=string::npos){
k++;
j=p+1;
}
else break;   

}


cout<<k<<endl;























}






















}