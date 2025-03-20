#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define int ll
#define print(x) cout << (x) << "\n"
#define vi vector<int>


void solve(){
  int n, k;
  cin >> n >> k;
  vi arr(n), idx(n);
  iota(all(idx), 1);
  for(auto& val: arr)
    cin >> val;
  sort(all(idx), [&](int a, int b){
    return arr[a - 1] < arr[b - 1];
  });
  int i = 0;
  vi ans;
  while(i < n && k > 0){
    if(k - arr[idx[i] - 1] >= 0){
      ans.pb(idx[i]);
      k -= arr[idx[i] - 1];
    }
    else{
      break;
    }
    i++;
  }
  print(i);
  for(auto& val: ans){
    cout << val << " ";
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