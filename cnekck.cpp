#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){


int n,k;
cin>>n>>k;

vector<int>v;
if(k==n){
    for(int i=0;i<n;i++){
        v.push_back(1);
    }


}

else if(k==1){
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
}


else v.push_back(-1);

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

cout<<endl;


}
}