#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;
const int mod = 1e9+7;
 
 
 
 
void	solve()
{
    int n, q; cin>>n>>q;
    vector<int> pref(n+1, 0);
    for (int i=1; i <= n; i++){
        int x; cin >> x;
        pref[i] = x^pref[i-1];
    }
    for (int i=0; i < q; i++){
        int a, b; cin >> a >> b;
        cout << (pref[b]^pref[a-1]) << endl;
    }
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