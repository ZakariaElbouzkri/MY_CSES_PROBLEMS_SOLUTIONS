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
    for (int i=n; i > 1; )
    {
        cout << i << " ";
        if (i&1)
            i = (i*3) + 1;
        else
            i /= 2;
    }
    cout << "1" << endl;
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
