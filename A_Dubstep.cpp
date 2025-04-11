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
  string str;
  cin >> str;
  string temp;
  for(int i = 0; i < sz(str); i++){
    temp.pb(str[i]);
    int size = sz(temp);
    if(size > 2 && temp[size - 1] == 'B' && temp[size - 2] == 'U' && temp[size - 3] == 'W'){
      temp.pop_back();
      temp.pop_back();
      temp.pop_back();
      if(sz(temp) && temp.back() != ' ')
        temp.pb(' ');
    }
  }
  print(temp);
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