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
  int n;
  string str;
  cin >> n >> str;
  for(int i = 1; i < n; i++){
    if(str[i - 1] != str[i]){
      print("YES");
      cout << str[i - 1] << str[i] << endl;
      return;
    }
  }
  print("NO");
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