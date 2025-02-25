#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> m;
        int i, s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }

        sort(v.begin(), v.end());

        for (i = 0; i < n; i++)
        {
            if ((v[i] - s) > 1)
            {
                break;
            }
            s = v[i];
        }
        if (i == n)
        {

            if (m.size() % 2 == 0)
            {
                cout << "Bob" << endl;
            }
            else
                cout << "Alice" << endl;
        }
        else if (n == 1 || i % 2 == 0 || m.size() == 1)
        {
            cout << "Alice" << endl;
        }
        else
            cout << "Bob" << endl;
    }
}