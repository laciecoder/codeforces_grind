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
  vi arr(3);
  int n;
  cin >> arr[0] >> arr[1] >> arr[2] >> n;
  sort(all(arr));
  int need1 = arr[2] - arr[0], need2 = arr[2] - arr[1];
  if(need1 + need2 > n || (n - need1 - need2) % 3 != 0){
    print("NO");
  }
  else{
    print("YES");
  }
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