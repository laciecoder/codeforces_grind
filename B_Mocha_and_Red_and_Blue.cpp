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


void solve(){
  int n;
  cin >> n ;
  string str;
  cin >> str;
  int cnt = 0;
  for(auto& ch: str){
    cnt += (ch != '?');
  } 
  if(cnt == 0){
    str[0] = 'R';
  }
  for(int i = 1; i < n; i++){
    if(str[i] == '?' && str[i - 1] != '?'){
      str[i] = str[i - 1] == 'R' ? 'B' : 'R';
    }
  }
  for(int i = n - 1; i >= 0; i--){
    if(str[i] == '?' && str[i + 1] != '?'){
      str[i] = str[i + 1] == 'R' ? 'B' : 'R';
    }
  }
  print(str);
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