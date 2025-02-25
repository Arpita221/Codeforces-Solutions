#include <bits/stdc++.h>
using namespace std;

#define fr() (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));
#define ll long long
#define ps(x, y) fixed << setprecision(y) << x
#define MOD 1e9 + 7
#define rep(x) \
    int x;      \
    cin >> x;   \
    while (x--)
#define pw(a, b) power(a, b)
#define mul(a, b) multiply(a, b)

ll power(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = ans * a;
        a = a * a;
        b = b >> 1;
    }
    return ans;
}

ll multiply(ll a, ll b)
{
    ll ans = 0;
    while (b)
    {
        if (b & 1)
            ans = ans + a;
        a = a + a;
        b = b >> 1;
    }
    return ans;
}

void solve()
{
    map<ll, ll> mp;
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin() + 1, arr.begin() + n + 1);
    ll answer = 0;
    for (ll i = 1; i < n; i++)
    {
        mp[arr[i]] += i - 1;
        if (arr[i] == arr[i + 1])
        {
            answer += mp[arr[i]];
        }
    }
    cout << answer << endl;
}

int32_t main()
{
    fr();
    rep(t)
    {
        solve();
    }
    return 0;
}
