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

void solve(int k)
{
  int attacking = 4 * (k - 1) * (k - 2);
  int totalSquare = k * k;
  int choose2 = totalSquare * (totalSquare - 1) / 2;
  print(choose2 - attacking);
}
// one more soln: (n^4-9n^2+24n-16)/2
void solve()
{
  int k;
  cin >> k;
  for (int i = 1; i <= k; i++)
  {
    solve(i);
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