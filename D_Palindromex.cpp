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

int solvee(int l, int r, vi& arr){
  int n = arr.size() / 2;
  set<int> set;
  for(int i = 0; i <= n; i++){
    set.insert(i);
  }
  while(l >= 0 && r < 2 * n && arr[l] == arr[r]){
    set.erase(arr[l]);
    l--;
    r++;
  }
  return *set.begin(); // to get first element smallest one which is not there in palindrome
}

void solve(){
  int n; 
  cin >> n;
  vi arr(2 * n);
  for(int& v: arr)
    cin >> v;
  // peeked solution this complement trick is awesome
  int x = -1, y;
  for(int i = 0; i < 2 * n; i++){
    if(!arr[i]){
      if(~x)
        y = i;
      else
        x = i;
    }
  }
  print(max({solvee(x,x,arr), solvee(y,y,arr) ,solvee((x + y) / 2, (x + y + 1)/2, arr)}));
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