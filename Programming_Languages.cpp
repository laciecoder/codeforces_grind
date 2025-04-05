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

void swapp(int &a, int &b)
{
  if (a > b)
    swap(a, b);
}

void solve()
{
  int a, b, a1, b1, a2, b2;
  cin >> a >> b >> a1 >> b1 >> a2 >> b2;
  swapp(a, b);
  swapp(a1, b1);
  swapp(a2, b2);
  if (a == a1 && b == b1)
  {
    print(1);
  }
  else if (a == a2 && b == b2)
  {
    print(2);
  }
  else
  {
    print(0);
  }
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