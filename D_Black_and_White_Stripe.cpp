#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define int ll
#define print(x) cout << x << endl;
//testing
int minimumRecolors(string blocks, int k)
{
    int ans = INT_MAX;
    int n = blocks.size();
    int wCnt = 0, start = 0;
    for (int i = 0; i < n; i++)
    {
        if (blocks[i] == 'W')
            wCnt++;
        if (i - start + 1 == k)
        {
            ans = min(ans, wCnt);
            wCnt -= (blocks[start] == 'W');
            start++;
        }
    }
    return ans;
}

void solve()
{
    int n, k;
    string str;
    cin >> n >> k >> str;
    print(minimumRecolors(str, k));
}

signed main()
{
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