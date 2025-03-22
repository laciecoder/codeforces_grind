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

//hackerrank
void solve()
{
  int n;
  cin >> n;
  vi arr(n);
  for (auto &val : arr)
    cin >> val;
  sort(all(arr));
  int t;
  cin >> t;
  int type, x;
  while (t--)
  {
    cin >> type >> x;
    if (type == 0)
    {
      print(n - ((lower_bound(all(arr), x) - arr.begin())));
    }
    else
    {
      print(n - (upper_bound(all(arr), x) - arr.begin()));
    }
  }
}

signed main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t = 1;
  // cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}