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
// 1+2*3=7
// 1*(2+3)=5
// 1*2*3=6
// (1+2)*3=9
void solve(){
  int a, b, c;
  cin >> a >> b >> c;
  print(max({a + b + c, a * (b + c), a * b * c, (a + b) * c}));
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