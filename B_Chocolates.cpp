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
  vector<int> arr(n);
  for(auto& ch: arr)
    cin >> ch;
  int ans = arr[n - 1];
  int temp = arr[n - 1];
  for(int i = n - 2; i >= 0; i--){
    temp = min(temp - 1, arr[i]);
    ans += max(temp, 0LL);
  }
  print(ans);
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