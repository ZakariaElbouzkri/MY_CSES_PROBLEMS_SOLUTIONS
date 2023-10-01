#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define mod 1000000007
#define endl '\n';
using namespace std;
 
 
 
 
 
void solve() 
{
    int n; cin >> n;
    vector<string> gr(n);
    for (int i = 0; i < n; ++i)
        cin >> gr[i];
    vector<vector<int>> dp(n, vector<int>(n, 0));
    if (gr[0][0] == '.')
        dp[0][0] = 1;    
    for (int j = 1; j < n; ++j)
    {
        if (gr[0][j] == '.')
            dp[0][j] = dp[0][j - 1];
    }
    for (int i = 1; i < n; ++i)
    {
        if (gr[i][0] == '.')
            dp[i][0] = dp[i - 1][0];
    }
    for (int i = 1; i < n; ++i)
    {
        for (int j = 1; j < n; ++j) {
            if (gr[i][j] == '.')
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
        }
    }
 
    cout << dp[n - 1][n - 1] << endl;
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
