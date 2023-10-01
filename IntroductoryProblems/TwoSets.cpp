#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;
 
 
void	solve()
{
    int n; cin >> n;
    set<int> s1;
    set<int> s2;
    int s = n * (n + 1) / 2;
    if (s % 2 == 0)
    {
        cout << "YES" << " ";
        int hl = s / 2;
        for (int i=n; i > 0; i--)
        {
            if (i <= hl)
            {
                s1.insert(i);
                hl -= i;
            }
            else
                s2.insert(i);
        }
        cout << s1.size() << " ";
        for (auto it = s1.begin(); it != s1.end(); it++)
            cout << *(it) << " ";
        cout << s2.size() << " ";
        for (auto it = s2.begin(); it != s2.end(); it++)
            cout << *(it) << " ";
        cout << endl;
    }
    else
        cout << "NO" << endl;
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