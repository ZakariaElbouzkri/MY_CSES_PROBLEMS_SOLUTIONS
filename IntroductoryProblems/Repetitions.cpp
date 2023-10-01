#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;
const int mod = 1e9+7;
 
void	solve()
{
    string  s; cin >> s;
 
    int rp = 1;
    int mx = 1;
    for (int i=1; i < s.size(); i++) {
        if (s[i] == s[i-1])
            rp++;
        else
            rp = 1;
        mx = max(mx, rp);
    }
    cout << mx << endl;
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
