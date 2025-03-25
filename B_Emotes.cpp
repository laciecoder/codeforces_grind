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
  int n, m, k, t;
  cin >> n >> m >> k;
  int a = NINF, b = NINF;
  for(int i = 0; i < n; i++){
    cin >> t;
    if(t >= a){
      b = a;
      a = t;
    }
    if(t < a && t > b){
      b = t;
    }
  }  
  int times = m / (k + 1);
  int rem = (m % (k + 1));
  int ans = (a * k + b) * (times) + a * rem; 
  print(ans);
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