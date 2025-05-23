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
  vi arr(n);
  for (auto &ch : arr)
  {
    cin >> ch;
  }
  if (n == 1)
  {
    cout << arr[0] << '\n';
    return;
  }
  int mx = *max_element(arr.begin(), arr.end());
  int pos = (n - 1) / 2;
  bool ans = false;
  for (int i = 0; i < n; i += 2)
  {
    if (arr[i] == mx)
    {
      ans = true;
      break;
    }
  }
  int ex = ans ? pos : max(pos - 1, 0LL);
  cout << mx + ex << endl;
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