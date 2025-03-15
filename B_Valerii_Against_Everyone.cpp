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
  vector<int> arr(n);
  for(auto& ch: arr)
    cin >> ch;
  sort(all(arr));
  for(int i = 1; i < n; i++){
    if(arr[i - 1] == arr[i]){
      print("YES");
      return;
    }
  }
  print("NO");
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