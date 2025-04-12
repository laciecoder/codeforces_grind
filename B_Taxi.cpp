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
  vi arr(5);
  int temp;
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    arr[temp]++;
  }
  int cnt = arr[4];
  int mini = min(arr[3], arr[1]);
  arr[3] -= mini;
  arr[1] -= mini;
  cnt += mini;
  cnt += arr[3];
  mini = arr[2] / 2;
  arr[2] -= mini * 2;
  cnt += mini;
  mini = arr[1] / 4;
  cnt += mini;
  arr[1] -= mini * 4;
  if (arr[1] > 2 && arr[2] == 1)
  {
    cnt += 2;
  }
  else if (arr[1] || arr[2])
  {
    cnt++;
  }
  print(cnt);
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