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

int arr[800][800];

void solve(){
  int n;
  cin >> n;
  vi ans(2 * n);
  int idx = 1;
  int xorr = 2 * n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> arr[i][j];
      if(i == 0 || j == n - 1){
        ans[idx] = arr[i][j];
        xorr = (xorr ^ ans[idx] ^ idx);
        idx++;
      }
    }
  }
  ans[0] = xorr;
  for(int i = 0; i < 2 * n; i++){
    cout << ans[i] << " \n"[i == (2 * n - 1)];
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