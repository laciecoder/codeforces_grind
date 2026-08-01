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

void printt(vi& arr){
  for(int v: arr)
    cout << v << ' ';
}

void solve(){
  int n;
  cin >> n;
  vi arr(n);
  vi two, three, none, both;
  for(int& v: arr){
    cin >> v;
    if(v % 2 == 0){
      if(v % 3 == 0){
        both.pb(v);
      }
      else{
        two.pb(v);
      }
    }
    else if(v % 3 == 0){
      three.pb(v);
    }
    else{
      none.pb(v);
    }
  }  
  printt(both);
  printt(two);
  printt(none);
  printt(three);
  print("");
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