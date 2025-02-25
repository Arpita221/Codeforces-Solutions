#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x,y;
int s1=0,s2=0,s3=0;
cin>>n;
vector<int>a(n);
vector<int>b(n-1);
vector<int>c(n-2);
for(int i=0;i<n;i++){
    cin>>a[i];
}



for(int i=0;i<n-1;i++){
    cin>>b[i];
}

for(int i=0;i<n-2;i++){
    cin>>c[i];
}


for(int i=0;i<n;i++){
    s1+=a[i];
}
for(int i=0;i<n-1;i++){
    s2+=b[i];
}

for(int i=0;i<n-2;i++){
    s3+=c[i];
}

cout<<s1-s2<<endl;
cout<<s2-s3<<endl;







}