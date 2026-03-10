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

int powww(int v){
  return v * v;
}

void solve(){
  int x, y;
  cin >> y >> x;
  int layer = max(x, y);
  int val = 0;
  if(layer & 1){ // odd square case
    if(layer == y){ // eg: 3 - 1
      val = powww(layer - 1) + x;
    }
    else{ // 1 - 3
      val = powww(layer) - y + 1;
      // cout << "here" << endl;
    }
  }
  else{ // even square case
    if(layer == y){ // 4 - 2
      val = powww(layer) - x + 1;
    }
    else{ // 2 - 4
      val = powww(layer - 1) + y; 
    }
  }
  print(val);
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