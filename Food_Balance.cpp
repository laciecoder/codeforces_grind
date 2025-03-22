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

// codechef sample test
void solve(){
  int f1, p1, f2, p2;
  cin >> f1 >> p1 >> f2 >> p2;
  int d1 = abs(f1 - p1), d2 = abs(f2 - p2);
  if(d1 == d2){
    print("Both");
  }
  else if(d1 < d2){
    print("First");
  }
  else{
    print("Second");
  }

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