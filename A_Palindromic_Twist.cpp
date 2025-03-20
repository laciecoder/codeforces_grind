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
  string str;
  cin >> str;
  bool ans = true;
  int start = 0, end = n - 1;
  while(start < end){
    int diff = abs(abs(str[start] - str[end]));
    ans &= (diff == 2 || diff == 0);
    start++, end--;
  }
  print((ans ? "YES" : "NO"));

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