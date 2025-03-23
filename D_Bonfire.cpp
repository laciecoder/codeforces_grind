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

unordered_map<char, pair<int, int>> dir = {{'E', {0, 1}}, {'W', {0, -1}}, {'S', {1, 0}}, {'N', {-1, 0}}};

void solve(){
  int n, r, c;
  string str, ans;
  cin >> n >> r >> c >> str;
  int x = 0, y = 0;
  set<pair<int, int>> set;
  set.insert({0, 0});
  for(auto& ch: str){
    auto [dx, dy] = dir[ch];
    x += dx;
    y += dy;
    if(set.count({x - r, y - c})){
      ans.pb('1');
    }
    else{
      ans.pb('0');
    }
    set.insert({x, y});
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