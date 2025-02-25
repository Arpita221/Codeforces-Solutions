#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,m,count = 0;

    cin>>n>>m;

    while(n<m){
        if(m%2) m++;
        else m = m/2;
        count++;
    }

    count  = count  + n - m;

    cout<<count<<"\n";

}