#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;
const int mod = 1e9+7;
 
vector<int> fact(1e6+1);
vector<int> inverse(1e6+1);
 
int power(int a, int n)
{
    if (n == 0) return 1;
    int res = power(a, n/2);
    if (n % 2)
        return ((res * res) %mod * a % mod) % mod;
    else
        return (res %mod * res%mod)%mod;
}
 
void culcFact(int n){
    fact[0] = inverse[0] = 1;
    for (int i=1; i < n; i++){
        fact[i] = (i * (fact[i-1])) % mod;
        inverse[i] = power(fact[i], mod-2);
    }
}
 
void    solve(){
    string s; cin >> s;
    culcFact(s.size()+1);
    vector<int> occ(26, 0);
    for (char c:s){
        occ[c-'a']++;
    }
    int ans = fact[s.size()];
    for (int a:occ){
        ans = (ans * inverse[a]) % mod;
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
