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
  vi arr(3);
  for (auto &v : arr)
    cin >> v;
  sort(all(arr));
  if (arr[1] != arr[2])
  {
    print("NO");
  }
  else
  {
    print("YES");
    print(arr[0] << " " << arr[0] << " " << arr[2]);
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