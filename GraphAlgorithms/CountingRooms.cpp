#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;
const int mod = 1e9+7;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
 
vector<vector<bool>> vis;
vector<string> g;
int n, m;
 
bool    isValid(int x, int y){
    if ((x < 0 || x >= n) || (y < 0 || y >= m)) return false;
    return (g[x][y] == '.' && !vis[x][y]);
}
 
 
void    DFSTraverse(int i, int j){
    for (int x=0; x < 4; x++){
        int newX = i + dx[x];
        int newY = j + dy[x];
        if (isValid(newX, newY)){
            vis[newX][newY] = true;
            DFSTraverse(newX, newY);
        }
    }
}
 
void	solve()
{
    cin >> n >> m;
    g = vector<string>(n);
    vis = vector<vector<bool>>(n, vector<bool>(m, false));
    for (string& s:g){
        cin >> s;
    }
    int ans = 0;
    for (int i=0; i < n; i++){
        for (int j=0; j < m; j++){
            if (g[i][j] == '.' && !vis[i][j]){
                ans++;
                vis[i][j] = true;
                DFSTraverse(i, j);
            }
        }
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
