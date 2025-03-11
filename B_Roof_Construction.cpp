#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define int ll
#define print(x) cout << x << endl;

void solve(){
  int n;
  cin >> n;
  int hp = 0;
  while((1 << (hp + 1)) <= n - 1)
    hp++;
  for(int i = (1 << hp) - 1; i >= 0; i--){
    cout << i << " ";
  }
  for(int i = (1 << hp); i < n; i++){
    cout << i << " ";
  }
  print("");
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