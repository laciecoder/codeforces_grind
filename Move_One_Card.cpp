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

void solve()
{
  int n;
  cin >> n;
  vi a(n), b(n);
  map<int, int> mp;
  for (int &v : a)
  {
    cin >> v;
    mp[v]++;
  }
  for (int &v : b){
    cin >> v;
    mp[v]--;
  }
  for (auto&[k, v]: mp){
    if(v != 0){
      print("No");
      return;
    }
  }
  int start = 0, end = n - 1;
  while(start < n && a[start] == b[start])
    start++;
  if(start == n){
    print("Yes");
    return;
  }
  while(end >= 0 && a[end] == b[end])
    end--;
  bool ltr = true, rtl = true;
  for(int i = start; i < end; i++){
    if(a[i + 1] != b[i]){
      ltr = false;
    }
    if(a[i] != b[i + 1])
      rtl = false;
  }
  print((ltr || rtl ? "Yes" : "No"));
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