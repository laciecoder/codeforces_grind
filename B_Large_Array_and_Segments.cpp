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

int prefix[100009];
int n, k, x;

bool check(int mid){
  mid--;
  int times = mid / n;
  int rem = mid % n;
  int val = k * prefix[n] - (prefix[n] * times + prefix[rem]);
  return val >= x;
}

void solve(){
  cin >> n >> k >> x;
  for(int i = 1; i <= n; i++){
    cin >> prefix[i];
    prefix[i] += prefix[i - 1];
  }
  int start = 0, end = n * k, ans = 0;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if(check(mid)){
      start = mid + 1;
      ans = mid;
    }
    else{
      end = mid - 1;
    }
  }
  
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