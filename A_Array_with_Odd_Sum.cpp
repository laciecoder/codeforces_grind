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

void solve()
{
  int n;
  cin >> n;
  int odd = 0, even = 0, sum = 0, temp = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    if (temp & 1)
      odd++;
    else
      even++;
    sum += temp;
  }
  if (sum % 2 == 1 || odd > 0 && even > 0)
  {
    print("YES");
  }
  else
  {
    print("NO");
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