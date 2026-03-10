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
  int sum = 0;
  for(int& ch: arr){
    cin >> ch;
    sum += ch;
  }
  int minDiff = INF;
  for(int i = 0; i < 1 << n; i++){
    int part = 0;
    for(int j = 0; j < n; j++){
      if(i & (1 << j)){
        part += arr[j];
      }
    }
    minDiff = min(minDiff, abs(sum - 2 * part));
  }
  print(minDiff);
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