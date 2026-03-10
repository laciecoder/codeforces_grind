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
  int n = str.size();
  map<int, int> mp;
  int oddCnt = 0;
  for(char ch: str)
    mp[ch]++;
  for(auto[k,v]: mp)
    oddCnt += (v & 1);
  if(oddCnt > 1 || oddCnt == 1 && n % 2 == 0){
    print("NO SOLUTION");
  }
  else{
    int start = 0, end = n - 1;
    for(auto [k, v]: mp){
      if(v & 1){
        str[n / 2] = k;
        v--;
      }
      for(int i = 2; i <= v; i += 2){
        str[start] = str[end] = k;
        start++;
        end--;
      }
    }
    print(str);
  }
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