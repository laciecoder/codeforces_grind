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
  int zeros = 0;
  for (auto ch : str)
    zeros += (ch == '0');
  if (zeros == 0)
  {
    print(str.size() - 1);
    return;
  }
  int end = str.size() - 1;
  int ans = 0, start = 0;
  while(end >= 0 && str[end] == '0')
    end--, ans++;
  while(start < end){
    ans += (str[start] != '0');
    start++;
  }
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