#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; ++i)
    {
        cin >> arr[i];
    }

    sort(arr, arr + m);

    int ans = INT_MAX;
    for (int k = 0; k <= m - n; k++)
    {
        ans = min(ans, arr[k + n - 1] - arr[k]);
    }

    cout << ans << endl;
}
