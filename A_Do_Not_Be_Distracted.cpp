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
  string str;
  cin >> n >> str;
  vi mp(26);
  char prev = str[0];

  for(char ch: str){
    if(ch != prev && mp[ch - 'A'] == 1){
        print("NO");
        return;
    }
    mp[ch - 'A'] = 1;
    prev = ch;
  }

  print("YES");
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