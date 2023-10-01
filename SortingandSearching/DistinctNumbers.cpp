#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;
const int mod = 1e9+7;

void	solve()
{
    int n; cin >> n;
    map<int, int> m;
    for (int i=0; i < n; i++)
    {
        int x; cin >> x;
        m[x] = i;
    }
    cout << m.size() << endl;
}
 
 
int32_t	main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;
    n = 1;
    //cin >> n;
    while (n--)
        solve();
}