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
  int n, ans = 0;
  cin >> n;
  vi arr(n);
  vi mp(30);
  for (int &v : arr)
  {
    cin >> v;
    for (int i = 0; i < 30; i++)
    {
      mp[i] += ((v >> i) & 1);
    }
  } 
  for (int &v : arr)
  {
    int cnt = 0;
    for (int i = 0; i < 30; i++)
    {
      bool b = ((v >> i) & 1);
      if (b)
      {
        cnt += (1 << i) * (n - mp[i]);
      }
      else
      {
        cnt += (1 << i) * mp[i];
      }
    }
    ans = max(ans, cnt);
  }
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