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
  int maxi = NINF, temp, mini = INF;
  bool allzero = true, allneg = true;
  for(int i = 0; i < n; i++){
    cin >> temp;
    maxi = max(maxi, temp);
    allzero &= (temp == 0);
    allneg &= (temp < 0);
    mini = min(mini, temp);
  }
  if(allzero)
    print(-1);
  else if(allneg){
    print(mini << " " << mini);
  }else
    print(maxi << " " << maxi);
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