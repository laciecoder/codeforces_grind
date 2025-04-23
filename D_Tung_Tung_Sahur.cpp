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
  string p, s;
  cin >> p >> s;
  int i = 0, j = 0, n = p.size(), m = s.size();
  while(i < n && j < m){
    char prev1 = p[i], prev2 = s[j];
    int cnt1 = 0, cnt2 = 0;
    while(i < n && prev1 == p[i]){
      cnt1++;
      i++;
    }
    while(j < m && prev2 == s[j]){
      cnt2++;
      j++;
    }
    if(prev1 != prev2 || cnt2 > (2 * cnt1) || cnt1 > cnt2){
      print("NO");
      return;
    }
  }
  if(i != n || j != m){
    print("NO");
    return;
  }
  print("YES");
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