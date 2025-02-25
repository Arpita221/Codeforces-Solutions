#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

int n ,c1=0;
cin>>n;
vector<int>v(n);


for(int i=0;i<n;i++){
    cin>>v[i];
}

for(int i=0;i<n;i++){
if(v[i]%2!=0){
   c1++;
}

}

if(c1%2==0)cout<<"Yes"<<endl;
else cout<<"NO"<<endl;







    }
}

    


