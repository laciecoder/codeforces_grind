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

void solve(){
  int mp[14] = {0};
  int temp = 0;
  for(int i = 0; i < 7; i++){
    cin >> temp;
    mp[temp]++;
  }
  int two = 0, equal = 0;
  for(int i = 1; i <= 13; i++){
    two += (mp[i] > 2);
    equal += (mp[i] == 2);
  }
  if(two > 1 || (two == 1 && equal >= 1)){
    print("Yes");
  }
  else{
    print("No");
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