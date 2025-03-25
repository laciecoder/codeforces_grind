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
  int n, k, t;
  cin >> n >> k;
  int arr[k + 1] = {0};
  for(int i = 0; i < n; i++){
    cin >> t;
    arr[t]++;
  }
  int drinks = 0;
  int tots = 0;
  for(int i = 1; i <= k; i++){
    tots += arr[i] / 2;
    drinks += (arr[i] % 2);
  }
  print(tots * 2 + (drinks + 1) / 2);
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