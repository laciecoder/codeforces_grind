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
  string str;
  cin >> str;
  int zero = 0, even = 0;
  int sum = 0;
  for (char ch : str)
  {
    int v = ch - '0';
    if (v == 0)
      zero++;
    else if (v % 2 == 0)
      even++;
    sum += v;
  }
  print((sum % 3 == 0 && ((even > 0 && zero > 0) || zero > 1) ? "red" : "cyan"));
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