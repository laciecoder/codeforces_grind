#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define int ll
#define print(x) cout << x << "\n"

void solve()
{
  int n;
  cin >> n;
  string ans;
  while (n % 7 != 0)
  {
    n -= 4;
    ans.pb('4');
    if (n < 4)
      break;
  }
  if (n % 7 == 0)
  {
    ans.insert(ans.end(), n / 7, '7');
    n = 0;
  }
  if (n != 0)
    print(-1);
  else
    print(ans);
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