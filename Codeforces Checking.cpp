#include <bits/stdc++.h>

using namespace std;

const string s = "codeforces";

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        bool found = false;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == c)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
    
}
