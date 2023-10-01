#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;
const int mod = 1e9+7;
 
 
vector<vector<int>> g;
vector<bool>         vis;
 
 
void    DFS(int u){
    vis[u] = true;
    for (int i=0; i < g[u].size(); i++){
        if (vis[g[u][i]]) continue;
        DFS(g[u][i]);
    }
}
 
void	solve()
{
    int n, m; cin >> n >> m;
    g.resize(n+1);
    vis = vector<bool>(n+1);
    for (int i=0; i < m; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> r;
    for (int i=1; i <= n; i++){
        if (!vis[i]){
            r.push_back(i);
            DFS(i);
        }
    }
    if (r.size() < 2){
        cout << "0\n";
    }else{
        int ans = r.size();
        cout << ans - 1 << "\n";
        for (int i=1; i < ans; i++){
            cout << r[i-1] << " " <<  r[i] << "\n";
        }
    }
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
