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
  vector<pair<int, int>> arr(n);
  for(int i = 0; i < n; i++){
    cin >> arr[i].first;
    arr[i].second = i + 1;
  }
  vector<int> temp(n);
  sort(rall(arr));
  int pos = 1, neg = -1;
  int sum = 0;
  int start = 0;
  int xorr = 1;
  for(auto [k, v]: arr){
    int idx = 0;
    if(xorr){
      idx = pos;
      pos++;
    }
    else{
      idx = neg;
      neg--;
    }
    temp[v - 1] = idx;
    sum += (2 * abs(idx)) * k;
    xorr ^= 1;
  }
  print(sum);
  cout << 0 << " ";
  for(auto val: temp){
    cout << val << " ";
  }
  print("");
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