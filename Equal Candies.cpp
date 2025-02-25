#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>v1(n);
    vector<int>v2(n);
    int ans=0;
for(int i=0;i<n;i++){
    cin>>v1[i];
}

for(int i=0;i<n;i++){
    cin>>v2[i];

}

sort(v1.begin(),v1.end());
sort(v2.rbegin(),v2.rend());
for(int i=0;i<n;i++ ){
    if(i<k) {ans+=max(v1[i],v2[i]);}
    else ans+=v1[i];


}
cout<<ans<<endl;

























}























    
}