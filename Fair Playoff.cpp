#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
       int p1=max(s1,s2);
       int p2=max(s3,s4);
        if(p1<min(s3,s4) || p2<min(s1,s2))
        {
          cout<<"NO"<<endl;
        }
 
        else
        {
            cout<<"YES"<<endl;
        }
        }
 
        }
 
 
