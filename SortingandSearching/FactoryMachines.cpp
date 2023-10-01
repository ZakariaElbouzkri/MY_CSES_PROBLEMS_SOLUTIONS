#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;
const int mod = 1e9+7;

void solve()
{
    int n;
	int t;
	cin >> n >> t;
	vector<int> k(n);
	for (int i = 0; i < n; i++) { cin >> k[i]; }
	int lo = 0;
	int hi = 1e18;
	int ans = 0;
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += (mid / k[i]);
			if (sum >= t) {
				break;
			}
		}
		if (sum >= t) {
			ans = mid;
			hi = mid - 1;
		} else {
			lo = mid + 1;
		}
	}
	cout << ans << "\n";
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