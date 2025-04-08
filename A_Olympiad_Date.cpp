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
  int cnt[10] = {};
  bool f = 0;

  for (int i = 0; i < n; i++)
  {
    int dig;
    cin >> dig;
    cnt[dig]++;
    if (cnt[0] >= 3 && cnt[1] >= 1 && cnt[2] >= 2 &&
        cnt[3] >= 1 && cnt[5] >= 1 && !f)
    {
      print(i + 1);
      f = 1;
    }
  }
  if (!f)
    print(0);
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