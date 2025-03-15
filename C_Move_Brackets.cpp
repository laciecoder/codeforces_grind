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
  stack<char> stk;
  int ans = 0;
  for(auto ch: str){
    if(ch == '('){
      stk.push(ch);
    }
    else{
      if (stk.empty()){
        ans++;
      }
      else{
        stk.pop();
      }
    }
  }
  print(ans);
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