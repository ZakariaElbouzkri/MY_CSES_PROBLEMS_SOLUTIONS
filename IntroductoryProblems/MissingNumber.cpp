#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;
 
void	solve()
{
    int n;
    cin >> n;
    vector<int> arr(n-1, 0);
    for(int& x: arr)
        cin >> x;
    sort(all(arr));
    if (arr[0] != 1){
        cout << 1 << endl;
    }
    else{
        for (int i=0; i < n; i++)
        {
            if (arr[i] != i + 1)
            {
                cout << i+1 << endl;
                break;
            }
        }
    }
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