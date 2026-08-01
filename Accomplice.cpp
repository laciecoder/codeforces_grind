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
  int n, d;
  cin >> n >> d;
  int ans = 0;
  vi ls(1e6+1);
  vector<pair<int, int>> arr(n);
  for(auto&[s, e]: arr){
    cin >> s >> e;
    if(e - s >= d){
      ls[s]++;
      ls[e - d + 1]--;
    }
  }
  int cnt = 0;
  for(int v: ls){
    cnt += v;
    ans += (cnt * (cnt - 1)) / 2;
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