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
  int n, x, y;
  cin >> n >> x >> y;
  vector<int> arr(n);
  for(auto& val: arr)
    cin >> val;
  
  for(int i = 0; i < n; i++){
    int mini = arr[i];
    for(int j = max(i - x, 0LL); j < min(n, i + y + 1); j++){
      mini = min(mini, arr[j]);
    }
    if(mini == arr[i]){
      print(i + 1);
      return;
    }
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