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
    vi arr(4);
    for(auto& val: arr)
        cin >> val;
    vi copy = arr;
    sort(all(arr));
    int first = max(copy[0], copy[1]);
    int second = max(copy[2], copy[3]);
    print((first == arr[2] && second == arr[3] || first == arr[3] && second == arr[2] ? "YES" : "NO"));
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