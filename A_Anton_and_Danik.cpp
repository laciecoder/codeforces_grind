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
  int D = 0, A = 0;
  cin >> n;
  char ch;
  for(int i = 0; i < n; i++){
    cin >> ch;
    if(ch == 'D')
      D++;
    else
      A++;
  }
  if(A == D)
    print("Friendship");
  else
    print((A > D ? "Anton" : "Danik"));

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