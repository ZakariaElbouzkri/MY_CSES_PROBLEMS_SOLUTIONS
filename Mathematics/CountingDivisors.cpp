#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;
const int mod = 1e9+7;
 
vector<int> divs(1e6+1, 2);
 
void    fillDivs(){
    divs[1] = 1;
    for (int i=2; i < 1e6+1; i++){
        for (int j=2; j*i < 1e6+1; j++){
            divs[i*j]++;
        }
    }
}
void	solve()
{
    int x;cin >> x;
    cout << divs[x] <<endl;
}
 
 
int32_t	main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;
    n = 1;
    fillDivs();
    cin >> n;
    while (n--)
        solve();
}
