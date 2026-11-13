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
  int n, k;
  cin >> n >> k;
  map<int, int> mp;
    
  vi arr(n);
  for(int& v: arr)
    cin >> v;
  sort(all(arr));
  int i = 1;
  int prev = arr[0];
  for(int& val: arr){
    if(prev != val)
      i++;
    mp[i]++;
    prev = val;
  }
  int cnt = 0;
  for(auto&[kk, v]: mp){
    if(kk <= v + 1)
      cnt++;
  }
  print(cnt);
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