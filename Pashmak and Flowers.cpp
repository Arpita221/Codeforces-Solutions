#include <bits/stdc++.h>

using namespace std;
const int INF = INT_MAX;
const int MAX = 200005;
int a[MAX];

int main()
{
   

    int n;
    cin >> n;

    int mn = INF, mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }

    long long t1 = 0, t2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mn) t1++;
        if (a[i] == mx) t2++;
    }

    cout << mx - mn << " ";
    if (mn == mx)
        cout << static_cast<long long>(n) * (n - 1) / 2;
    else
        cout << t1 * t2;

}
