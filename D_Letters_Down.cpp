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

void solve(){
  int n;
  string s;
  cin >> n >> s;
  vi seen(128);
  for(int i = 0; i < n / 2; i++){
    for(int j = min(s[i], s[n - i - 1]); j < max(s[i], s[n - i - 1]); j++)
      seen[j] = true;
  }
  int sum = accumulate(all(seen), 0);
  print(sum);
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