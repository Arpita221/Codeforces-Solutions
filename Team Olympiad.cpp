#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c1=0,c2=0,c3=0;
    cin>>n;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    int ar[n];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        if(ar[i]==1)
            {
                c1++;
                v1.push_back(i);
                }
        else if (ar[i]==2)
            {
                c2++;
                v2.push_back(i);
                }
        else if(ar[i]==3)
            {
                c3++;
                v3.push_back(i);
            }
        }
        int p=min(c1,min(c2,c3));
        
        cout<<p<<endl;
        
        for(int i=0;i<p;i++)
        {
           cout<<v1.at(i)<<" "<<v2.at(i)<<" "<<v3.at(i)<<endl;
        }
 
}