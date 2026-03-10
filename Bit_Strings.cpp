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

int binpow(int base, int exponent, int mod){
  int ans = 1;
  base %= mod;
  while(exponent > 0){
    if(exponent & 1){
      ans = ans * base % mod;
    }
    base = base * base % mod;
    exponent >>= 1;
  }
  return ans;
}

void solve(){
  int n;
  cin >> n;
  int mod = 1e9+7;
  
  print(binpow(2, n, mod));
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