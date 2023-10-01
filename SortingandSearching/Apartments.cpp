#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;
const int mod = 1e9+7;
 
// 10 10 10
// 90 41 20 39 49 21 35 31 74 86
// 14 24 24 7 82 85 82 4 60 95
 
void	solve()
{
    int n, m, k; cin >> n >> m >> k;
    multiset<int>    mm;
    multiset<int> ap;
    for (int i=0;i<n; i++){
        int x;cin >> x;
        mm.insert(x);
    }
    for (int i=0;i<m; i++){
        int x;cin >> x;
        ap.insert(x);
    }
    int s=0;
    for (auto it = mm.begin(); it != mm.end(); it++)
    {
        auto    upper = ap.upper_bound(*(it) - k-1);
        if (upper != ap.end() && *(upper) <= (*(it) + k)){
            s++;
            ap.erase(upper);
        }
    }
    cout << s << endl;
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
