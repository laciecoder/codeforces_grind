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
  bool ok = true;
  for(int i = 1; i < n; i++){
    ok &= (str[i - 1] <= str[i]);
  }
  if(ok){
    print("NO");
  }
  else{
    int start = 0, end = 1;
    while(end < n){
      if(str[start] > str[end]){
        break;
      }
      start++;
      end++;
    }
    print("YES");
    print(start + 1 << " " << end + 1);
  }
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