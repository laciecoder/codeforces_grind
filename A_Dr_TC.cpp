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
  int n;
  cin >> n;
  string str;
  cin >> str;
  int cnt = count(all(str), '1');
  int total = 0;
  // for(char ch: str){
  //   total += (cnt + (ch == '1' ? -1 : 1));
  // }
  // print(total);
  print(cnt * (n - 1) + n - cnt );
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