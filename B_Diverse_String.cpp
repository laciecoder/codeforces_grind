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
  int n, k;
  cin >> n >> k;
  string str;
  cin >> str;
  int ones = count(all(str), '1');
  int zeros = n - ones;
  int mn = min(ones, zeros);
  int mx = max(ones, zeros);
  int take = min(k, mn);
  mx += take;
  mn -= take;
  int ans = 1 + (mx * (mx + 1)) / 2 + (mn * (mn + 1)) / 2;
  print(ans);
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