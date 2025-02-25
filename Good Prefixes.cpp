#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){


int n,a=0,m=0;
long long sum=0;

cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}


//sort(v.begin(),v.end());


for(int i=0;i<n;i++){
    sum+=v[i];
    m=max(m,v[i]);




if((sum-m)==m){
    a++;
}

}
cout<<a<<endl;




}



















}