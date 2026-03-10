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
  int m, n;
  cin >> m >> n;
  vector<pair<int, int>> points(m);
  vi arr(n);
  for(int& v: arr)
    cin >> v;
  int sum = 0;
  for(auto&[i, j]: points){
    cin >> i >> j;
    int rem = arr[i - 1] - j;
    if(rem >= 0){
      arr[i - 1] -= j;
      sum += j;
    }
    else{
      sum += arr[i - 1];
      arr[i - 1] = 0;
    }
  }
  print(sum);
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