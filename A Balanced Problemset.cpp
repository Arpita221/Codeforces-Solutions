#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,n;
        cin >> x >> n;
        int ans = 1;
        for(int i=1;i*i<=x;i++)
        {
            if(x%i==0)
            {
                if(n<=x/i)
                    ans=max(ans,i);
                if(n<=i)
                    ans=max(ans,x/i);
            }
        }
        cout << ans << '\n';
    }
}