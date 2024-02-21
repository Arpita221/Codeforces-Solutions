#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){

vector<pair<int,int> >aur(4);

for(int i=0;i<4;i++){
cin>>aur[i].first>>aur[i].second;

}


sort(aur.begin(),aur.end());

int x=max(aur[2].second,aur[3].second);
int y=min(aur[0].second,aur[1].second);
int d=x-y;
cout<<d*d<<endl;










}










}