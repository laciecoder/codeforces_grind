#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define int ll
#define print(x) cout << x << "\n"
#define vi vector<int>
#define INF LLONG_MAX
#define NINF LLONG_MIN

void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    int maxi = NINF;
    int sum = 0;
    for (int &v : arr)
    {
        cin >> v;
        maxi = max(maxi, v);
        sum += v;
    }
    print((1.0 * (sum - maxi) / (n - 1) + maxi));
}

signed main()
{
    cout << fixed << setprecision(9);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}