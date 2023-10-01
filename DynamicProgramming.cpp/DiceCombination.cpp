#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
#define mod 1000000007
using namespace std;
 
 
vector<int> dp(1e6+1, -1);
 
int rec(int n)
{
    if (n < 0)
        return (0);
    if (dp[n] != -1)
        return dp[n];
    int ways = 0;
    for (int i=1; i <= 6; i++)
    {
        ways += rec(n - i);
        dp[n] = ways % mod;
    }
    return (dp[n]);
}
 
void	solve()
{
    int n;
    dp[0] = 1;
    cin >> n;
    int ways = rec(n);
    cout << ways << endl;
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