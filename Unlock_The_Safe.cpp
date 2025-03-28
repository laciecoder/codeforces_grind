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

bool dp(vector<pair<int, int>> &arr, int k, int idx);
// not working
void solve()
{
  int n, k;
  cin >> n >> k;
  vi a(n), b(n);
  for (auto &v : a)
    cin >> v;
  for (auto &v : b)
    cin >> v;

  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    int cnt1 = 0, cnt2 = 0;
    int c1, c2;
    c1 = a[i];
    c2 = a[i];
    while (c1 != b[i])
    {
      c1++;
      cnt1++;
      if (c1 == 10)
        c1 = 1;
    }
    while (c2 != b[i])
    {
      c2--;
      cnt2++;
      if (c2 == 0)
        c2 = 9;
    }
    cnt += min(cnt1, cnt2);
  }

  print((cnt <= k ? "YES" : "NO"));
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