#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int>mp;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        mp[s]++;
    }
    int c=0,d=0;
    string t;
    map<string,int>:: iterator itr;
    for(itr = mp.begin(); itr!=mp.end(); itr++){
        c = itr->second;
        if(c > d){
            d = c;
            t = itr->first;
        }
    }
    cout<<t<<endl;

    
}











