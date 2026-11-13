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
  vi arr(n), seen(n);
  int k = 0;
  map<int, int> mp;
  for(int i = 0; i < n; i++){
    cin >> k;
    mp[k]++;
  }
  int start = 0, end = n - 1;
  for(auto& [k, v]: mp){
    arr[start] = k;
    start++;
    v--;
    while(v--){
      arr[end] = k;
      end--;
    }
  }
  int cnt = 0;
  seen[0] = seen[n - 1] = 1;
  for(int i = 1; i < n; i++){
    if(arr[i - 1] < arr[i]){
      seen[i] = 1;
    }
    else{
      break;
    }
  }
  for(int i = n - 2; i >= 0; i--){
    if(arr[i + 1] < arr[i]){
      seen[i] = 1;
    }
  
  }
  for(int v: seen){
    cnt += (v > 0);
  }
  print(cnt);
  for(int v: arr){
    cout << v << ' ';
  }
  cout << endl;
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