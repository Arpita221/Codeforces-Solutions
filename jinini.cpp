#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(4);
        int x, y;

        for (int i = 1; i <= 4; i++)
        {
            cin >> v[i];
        }


            if (v[1] > v[2]){
                x = v[1];
            }
                else x=v[2];
if(v[3]>v[4]){
    y=v[3];

}
else y=v[4];



int z=max((v[1],v[2]),(v[3],v[4]));

if(x==z||y==z) cout<<"YES"<<endl;
else cout<<"NO"<<endl;







    }
}
