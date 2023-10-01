#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;
const int mod = 1e9+7;

int n, k;
vector<int> a(n);

int good(int m)
{
    int subs = 1, sum = 0;
    for(int i=0; i<n; i++)
    {
        if (sum + a[i] <= m)
            sum += a[i];
        else{
            subs++;
            sum = a[i];
            if (sum > m)
                return 0;
        }
    }
    return (subs <= k);
}


void    solve()
{
    cin >> n >> k;
    a = vector<int>(n);
    for(int &i : a)    cin >> i;
    int l = 1, r = 1e15, ans = *max_element(all(a));
    while(l<=r)
    {
        int mid = (l+r)/2;
        if (good(mid)){
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid+1;
    }
    cout << ans << endl;
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