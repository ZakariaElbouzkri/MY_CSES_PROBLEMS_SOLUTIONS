#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;
const int mod = 1e9+7;


vector<vector<int>> g;
vector<int>     sub;

int    DFS(int u){
    sub[u] = 1;
    for (int i=0; i < g[u].size(); i++){
        sub[u] += DFS(g[u][i]);
    }
    return sub[u];
}

void	solve()
{
    int n; cin >> n;
    g.resize(n+1);
    sub = vector<int>(n+1, 0);
    for (int i=2; i <= n; i++){
        int b; cin >> b;
        g[b].push_back(i);
    }
    DFS(1);
    for (int i=1; i <= n; i++){
        cout << (sub[i] - 1) << " ";
    }
    cout << "\n";
}


int32_t	main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while (t--)
        solve();
}
