#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
    int cura=a;
    while(a>=b){
        int curb = a/b;
     cura+=curb;
        a = curb + (a%b);
    }
    cout<<cura<<endl;
}















