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
  cin >> n;
  vi arr(n);
  for(auto& ch: arr)
    cin >> ch;
  int cnt = 0;
  int prev = arr[0];
  for(int i = 0; i < n; i++){
    if(arr[i] < prev){
      cnt++;
    }
    prev = arr[i];
  }
  int ans = 2;
  if(cnt == 0)
    ans = 0;
  else if(arr[0] == 1 || arr[n - 1] == n)
    ans = 1;
  else if(arr[0] == n && arr[n - 1] == 1)
    ans = 3;
  print(ans);
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