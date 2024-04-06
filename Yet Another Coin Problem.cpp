#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

int n;
cin>>n;

int ans=n;
for(int i=0;i<625;i++){
    int a=i/125;
    int b=(i/25)%25;
    int c=(i/5)%5;
    int l=i%5;
if(a<=4&&b<=4&&c<=4&&l<=4){
int sum=a*10+b*6+c*3+l*1;
if(n-sum>=0&&(n-sum)%15==0){
    ans=min(ans,a+b+c+l+(n-sum)/15);
}
}
}


cout<<ans<<endl;













}







}