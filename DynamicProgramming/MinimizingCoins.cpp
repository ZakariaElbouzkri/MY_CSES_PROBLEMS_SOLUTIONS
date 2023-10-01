#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend() 
#define int long long
#define endl '\n' 
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> m(n);

    for (int & a : m)
        cin >> a;
    vector<int> mm(x + 1, INT_MAX);
    mm[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int coin : m)
        {
            if (i - coin >= 0)
                mm[i] = min(mm[i], mm[i - coin] + 1);
        }
    }
    if (mm[x] == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
        cout << mm[x] << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    n = 1;
    //cin >> n;
    while (n--)
        solve();
}
