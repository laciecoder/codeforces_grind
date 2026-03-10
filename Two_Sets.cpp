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

int arr[1000001], brr[1000001];

void solve(){
  int n;
  cin >> n;
  int sum = (n * (n + 1)) / 2;
  if(sum & 1){
    print("NO");
  }
  else{
    print("YES");
    int i = 0, j = 0;
    int actual = sum / 2;
    for(int k = n; k >= 1; k--){
      if(actual >= k){
        actual -= k;
        arr[i++] = k;
      }
      else{
        brr[j++] = k;
      }
    }
    print(i);
    for(int k = 0; k < i; k++){
      cout << arr[k] << ' ';
    }
    print("");
    print(j);
    for(int k = 0; k < j; k++){
      cout << brr[k] << ' ';
    }
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