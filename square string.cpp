#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (s.size() % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool ok = true;
            for (int i = 0; i < (s.size() / 2); i++)
            {
                if (s[i] != s[i + s.size() / 2])
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    
}
