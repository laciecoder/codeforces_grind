#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define int ll
#define print(x) cout << x << endl;

int longestCommonSubstr(const string& s1, const string& s2) {
  int m = s1.length();
  int n = s2.length();

  // Create a 1D array to store the previous row's results
  vector<int> prev(n + 1, 0);
  vector<int> curr(n + 1, 0);
  
  int res = 0;
  for (int i = 1; i <= m; i++) {
    
      // Create a temporary array to store the current row
      for (int j = 1; j <= n; j++) {
          if (s1[i - 1] == s2[j - 1]) {
              curr[j] = prev[j - 1] + 1;
              res = max(res, curr[j]);
          } else {
              curr[j] = 0;
          }
      }
    
      // Move the current row's data to the previous row
      prev.swap(curr);
  }
  return res;
}

void solve(){
  string a, b;
  cin >> a >> b;
  int temp = longestCommonSubstr(a, b);
  int sum = a.length() + b.length() - 2 * temp;
  print(sum)
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