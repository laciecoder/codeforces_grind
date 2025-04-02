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
  int n, k;
  cin >> n >> k;
  vi a(n), b(n);
  for(auto& c: a)
    cin >> c;
  for(auto& c: b)
    cin >> c;
  int ans = 0, sum = 0, maxi = 0;
  for(int i = 0; i < min(n, k); i++){
    sum += a[i];
    maxi = max(maxi, b[i]);
    ans = max(ans, sum + maxi * (k - i - 1));
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