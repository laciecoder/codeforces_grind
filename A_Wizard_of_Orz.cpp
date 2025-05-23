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
  int n;
  cin >> n;
  if(n == 1)
    print(9);
  else if(n == 2)
    print(98);
  else if(n == 3)
    print(989);
  else {
    string ans = "989";
    for(int i = 3; i < n; i++){
      ans.pb((i - 3) % 10 + '0');
    }
    print(ans);
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