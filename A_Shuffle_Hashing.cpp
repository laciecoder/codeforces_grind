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
  string p, h;
  cin >> p >> h;
  bool possible = false;
  int n = sz(p);
  int start = 0;
  vector<int> mp1(26), mp2(26);
  for(auto& ch: p){
    mp1[ch - 'a']++;
  }
  for(int i = 0; i < sz(h); i++){
    mp2[h[i] - 'a']++;
    if(i >= n)
      mp2[h[start++] - 'a']--;
    possible |= (mp1 == mp2);
  }
  print((possible ? "YES" : "NO"));
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