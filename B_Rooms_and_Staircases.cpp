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
  cin >> n;
  char ch;
  int first = -1, last = -1;
  for(int i = 0; i < n; i++){
    cin >> ch;
    if(ch == '1'){
      if(first == -1)
        first = i;
      last = i;
    }
  }
  if(first == -1)
    print(n);
  else  
    print(max(n, 2 * max(n - first, last + 1)));
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