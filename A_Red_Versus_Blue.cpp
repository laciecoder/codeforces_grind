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
  int n, r, b;
  cin >> n >> r >> b;
  string ans;

  int cap = r / (b + 1);
  int rem = r % (b + 1);
  for(int i = 0; i < rem; i++){
    ans = ans + string(cap + 1, 'R') + 'B';
  }
  for(int i = rem; i < b; i++){
    ans = ans + string(cap, 'R') + 'B';
  }

  ans = ans + string(cap, 'R');

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