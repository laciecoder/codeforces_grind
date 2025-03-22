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
  string str;
  cin >> n >> str;
  vi mp(26, 0);
  int ans = 0, cnt = 0;
  for(auto ch: str){
    if(mp[ch - 'a'] == 0){
      cnt++;
      mp[ch - 'a'] = 1;
    }
    ans += cnt;
  }
  print(ans);
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