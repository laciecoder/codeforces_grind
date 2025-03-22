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


void solve(){
  int n;
  cin >> n;
  vi arr(n);
  for(auto& val: arr){
    cin >> val;
  }
  vi dp(n);
  for(int i = 1; i < n; i++){
    dp[i] = dp[i - 1] + abs(arr[i - 1] - arr[i]);
    if(i > 1){
      dp[i] = min(dp[i], dp[i - 2] + abs(arr[i] - arr[i - 2]));
    }
  }
  print(dp[n - 1]);
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