#include<bits/stdc++.h> 
using namespace std; 

int main() 

{ 
    int t;
    cin>>t;
    while(t--)
    
   { 
       string s; 
       cin>>s; 
       int flag=0; 
       for(int i=0;i<s.size();i++) 
       { 
           if(s[i]=='i'&&s[i+1]=='t') 
           { 
               flag=1;
           } 
       } 
       if(flag==1) 
       { 
           cout<<"YES"<<endl; 
       } 
       else   
       { 
          cout<<"NO"<<endl; 
       } 
   } 
}



