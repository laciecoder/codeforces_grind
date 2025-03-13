#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define int ll
#define print(x) cout << x << endl;

void solve()
{
  int w, h;
  cin >> w >> h;
  int ans = 0;

  for (int i = 0; i < 4; i++)
  {
    int temp, temp2;
    cin >> temp;
    int first = 0, last = 0;
    for (int j = 0; j < temp; j++)
    {
      cin >> temp2;
      if (j == 0)
        first = temp2;
      if (j == temp - 1)
        last = temp2;
    }
    ans = max(ans, (last - first) * (i < 2 ? h : w));
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