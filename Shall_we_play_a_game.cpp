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
  cin >> n;
  int mod = 998244353;
  auto power = [](int a, int b, int m) -> int{
    a %= m;
    int ans = 1;
    while(b > 0){
      if(b & 1){
        ans = ans * a % m;
      }
      a = a * a % m;
      b >>= 1;
    }
    return ans;
  };
  if(n & 1){
    print(power(2, n - 1, mod));
  }
  else{
    print(3 * power(2, n - 2, mod) % mod); 
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