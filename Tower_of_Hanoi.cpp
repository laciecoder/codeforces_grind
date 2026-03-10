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

void hanoi(int n, int from, int to, int aux){
  if(n == 1){
    print(from << " " << to);
  }
  else{
    hanoi(n - 1, from, aux, to);
    print(from << " " << to);
    hanoi(n - 1, aux, to, from);
  }
}

void solve(){
  int n;
  cin >> n;
  print(((1 << n) - 1));
  
  hanoi(n, 1, 3, 2);
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