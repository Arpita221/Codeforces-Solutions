#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
vector<int>v(3);
for(int i=0;i<3;i++){
    cin>>v[i];
}

sort(v.begin(),v.end());

for(int i=0;i<5;i++){
    if(v[0]<=v[1]&&v[0]<=v[2]){
        v[0]++;
 
 
 
 
 
    }

else if(v[1]<=v[0]&&v[1]<=v[2]){
    v[1]++;
}

else v[2]++;






}

int r=v[0]*v[1]*v[2];

cout<<r<<endl;
















}


















}