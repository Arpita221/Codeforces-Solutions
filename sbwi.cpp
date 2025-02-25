
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int sum=0;
sort(v.begin(),v.end());



for(int i=1;i<n;i++){

sum=sum+v[i];






}




if(abs(v[0])==sum){
    cout<<"YES"<<endl;
}


else cout<<"NO"<<endl;



















}
