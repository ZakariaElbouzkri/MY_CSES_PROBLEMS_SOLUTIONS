#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;
 
 
void	solve()
{
    int n; cin >> n;
    vector<int> arr(n);
    int su = 0;
    for (int i=0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0 && arr[i] < arr[i-1])
        {
            su += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout << su << endl;
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
