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
  int curr = 0, val = 0;
  for(int i = 0; i < n; i++){
    cin >> curr;
    if(curr == 0){
      print(i);
      return;
    }
    if(k == i + 1)
      val = curr;
    if(curr < val){
      print(i);
      return;
    }
  }
  print(n);
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