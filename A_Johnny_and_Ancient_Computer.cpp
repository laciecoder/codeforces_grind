#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define int ll
#define print(x) cout << x << "\n"

int get(int right){
  while(!(right & 1)){
    right /= 2;
  }
  return right;
}


void solve(){
  int a, b;
  cin >> a >> b;
  if(a > b)
    swap(a, b);
  int right = get(a);
  if(get(b) != right){
    print(-1);
    return;
  }
  int ans = 0;
  b /= a;
  while(b >= 8){
    b /= 8;
    ans++;
  }
  if(b > 1)
    ans++;
  print(ans);

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