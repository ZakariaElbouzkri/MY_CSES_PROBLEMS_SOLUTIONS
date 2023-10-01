#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;
const int mod = 1e9+7;
 
 
 
int power(int a, int n)
{
    if (n == 0) return 1;
    int res = power(a, n/2);
    if (n % 2)
        return ((res * res) %mod * a % mod) % mod;
    else
        return (res %mod * res%mod)%mod;
}
 
 
void	solve()
{
    int a, b; cin >> a >> b;
    cout << power(a, b) << endl;   
}
 
 
int32_t	main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;
    n = 1;
    cin >> n;
    while (n--)
        solve();
}
