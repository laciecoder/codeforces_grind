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
  int n;
  cin >> n;
  for(int i = 0; i <= n; i++){
    for(int j = 1; j <= n - i; j++){
      cout << "  " ;
    }
    int multiplier = 1;
    int val = 0;
    for(int k = 0; k <= 2 * i; k++){
      cout << val << (val == 0 && multiplier == -1 || i == 0 ? "" : " ");
      if(val == i){
        multiplier *= -1;
      }
      val += multiplier;
    }
    print("");
  }
  for(int i = n - 1; i >= 0; i--){
    for(int j = 1; j <= n - i; j++){
      cout << "  " ;
    }
    int multiplier = 1;
    int val = 0;
    for(int k = 0; k <= 2 * i; k++){
      cout << val << (val == 0 && multiplier == -1 || i == 0 ? "" : " ");
      if(val == i){
        multiplier *= -1;
      }
      val += multiplier;
    }
    print("");
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