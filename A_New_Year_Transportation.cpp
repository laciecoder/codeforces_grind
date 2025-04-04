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
  int n, t;
  cin >> n >> t;
  vector<int> arr(n - 1);
  for(auto& val: arr)
    cin >> val;
  arr.pb(1);
  for(int i = 1; i <= n; i += arr[i - 1]){
    if(i == t){
      print("YES");
      return;
    }
  }
  print("NO");
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