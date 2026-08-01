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

void solve()
{
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  
  int iocnt = 0;

  for(int i = 0; i < n; i++){
    if(s[i] == 'o'){
      iocnt++;
      if(i > 0 && s[i - 1] == '?')
        s[i - 1] = '.';
      if(i + 1 < n && s[i + 1] == '?')
        s[i + 1] = '.';
    }
  }
  int remcnt = k - iocnt;
  
  vector<pair<int, int>> blks;

  int i = 0;

  while (i < n){
    if(s[i] == '?'){
      int left = i;
      while(i < n && s[i] == '?')
        i++;
      blks.pb({left, i});
    } else {
      i++;
    }
  }

  int globalMax = 0;

  for (auto [l, r]: blks) {
    globalMax += (r - l + 1) / 2;
  }

  if(remcnt == 0) {
    for(auto [l, r] : blks){
      for(i = l; i <= r; i++){
        s[i] = '.';
      }
    }
  }
  else if(remcnt == globalMax){
    for (auto [l, r]: blks){
      int len = r - l;
      if(len & 1){ 
        for(i = l; i <= r; i++){
          if((i - l) % 2 == 0){
            s[i] = 'o';
          }
          else {
            s[i] = '.';
          }
        }
      }
    }
  }
  print(s);
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