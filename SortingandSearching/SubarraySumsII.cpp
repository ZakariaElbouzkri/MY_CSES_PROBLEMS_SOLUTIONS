#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define int long long
#define endl '\n';
using namespace std;


void	solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int& a:nums)
        cin >> a;
    int curr = 0;
    int i = 0;
    int count = 0;    
    unordered_map<int,int> m;
    while(i<n)
    {
        curr += nums[i];
        if(curr == k) 
            count += 1;
        
        if(m.find(curr-k)!=m.end())
            count += m[curr-k];
        m[curr] += 1;
        i += 1;
    }
    cout << count << endl;
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