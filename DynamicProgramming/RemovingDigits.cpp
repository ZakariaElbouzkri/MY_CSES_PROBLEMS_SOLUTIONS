#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;
const int mod = 1e9+7;
 
 
 
int    rec(int n){
    if (n == 0) return 1;
    if (n <= 9) return 1;
    int sub = n%10, div = n;
    while (div){
        div /= 10;
        sub = max(sub, div%10);
    }
    return (1 + rec(n-sub));
}
 
void	solve()
{
    int n; cin >> n;
    int steps = rec(n);
    cout << steps << endl;
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
