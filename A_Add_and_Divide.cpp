#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define int ll
#define print(x) cout << x << "\n"

void solve(){
  int a, b;
  cin >> a >> b;
  int ans = LLONG_MAX;
  for(int j = b + (b == 1); j <= b + 30; j++){
    int x = a, cnt = j - b;
    while(x > 0){
      x /= j;
      cnt++;
    }
    ans = min(ans, cnt);
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