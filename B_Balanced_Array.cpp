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
  n /= 2;
  if(n % 2 != 0){
    print("NO");
  }
  else{
    print("YES");
    for(int i = 1; i <= n; i++){
      cout << i * 2 << " ";
    }
    for(int i = 1; i < n; i++){
      cout << i * 2 - 1 << " ";
    }
    print(3 * n - 1);
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