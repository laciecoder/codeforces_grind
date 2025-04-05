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
  int x1, p1, x2, p2;
  cin >> x1 >> p1 >> x2 >> p2;
  int mini = min(p1, p2);
  p1 -= mini;
  p2 -= mini;
  if(p1 > 6){
    print('>');
  }
  else if(p2 > 6){
    print('<');
  }
  else{
    x1 *= pow(10, p1);
    x2 *= pow(10, p2);
    if(x1 > x2){
      print(">");
    }
    else if(x1 < x2){
      print("<");
    }
    else{
      print("=");
    }
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