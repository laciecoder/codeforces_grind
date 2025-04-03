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
  int n, k;
  string str; 
  cin >> n >> k >> str;
  reverse(all(str));
  int cnt = str.front() == '1';
  int ops = 0;
  for(int i = 1; i < n; i++){
    if(str[i] == '1')
      cnt++;
    if(str[i] == '0' && str[i - 1] == '1' && ops < k){
      ops++;
      cnt++;
      str[i] = '1';
    }
  }
  // print(str);
  print(cnt);
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