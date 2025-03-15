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
  int n, m, temp = 0, negative = 0, sum = 0, mini = LLONG_MAX;
  cin >> n >> m;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> temp;
      if(temp < 0)
        negative++;
      sum += abs(temp);
      mini = min(mini, abs(temp));
    }
  }
  if(negative & 1){
    print(sum - 2 * mini);
  }
  else{
    print(sum);
  }
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