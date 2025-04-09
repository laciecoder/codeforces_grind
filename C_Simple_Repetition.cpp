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

bool isPrime(int x){
  int cnt = 0;
  for(int i = 1; i <= sqrt(x); i++){
    if(x % i == 0){
      cnt++;
      if(x / i != i)
        cnt++;
    }
  }
  return cnt == 2;
}

void solve(){
  int x, k;
  cin >> x >> k;
  if(x == 1 && k == 2)
    print("YES");
  else if(isPrime(x) && k == 1)
    print("YES");
  else
    print("NO");

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