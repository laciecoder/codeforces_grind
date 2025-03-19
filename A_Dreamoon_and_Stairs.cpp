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
  int n, m;
  cin >> n >> m;
  int a = n / 2, b = n % 2;
  if(a + b % m == 0){
    print(a + b);
  }
  else if((a + b + m - 1) / m * m <= n){
    print((a + b + m - 1) / m * m);
  }
  else{
    print(-1);
  }

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