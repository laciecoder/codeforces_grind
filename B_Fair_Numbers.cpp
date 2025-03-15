#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define int ll
#define print(x) cout << x << "\n"

int arr[10] = {0};

bool check(int n)
{
  int copy = n;
  while (copy > 0)
  {
    int digit = copy % 10;
    copy /= 10;
    arr[digit] = 1;
  }
  bool ans = true;
  for (int i = 1; i <= 9; i++)
  {
    if (arr[i] && n % i != 0)
    {
      ans = false;
    }
    arr[i] = 0;
  }
  return ans;
}
void solve()
{
  int n;
  cin >> n;
  int b = n;
  while (!check(b))
  {
    b++;
  }
  print(b);
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