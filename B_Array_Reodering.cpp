#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define int ll
#define print(x) cout << x << endl;

void solve(){
  int n;
  cin >> n;
  vector<int> arr(n);
  int even = 0;
  for(auto& val: arr){
    cin >> val;
  }
  sort(all(arr), [](int a, int b){
    return (a & 1) < (b & 1);
  });
  int count = 0;

  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      if(__gcd(arr[i], arr[j] << 1) > 1){
        count++;
      }
    }
  }

  print(count);
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