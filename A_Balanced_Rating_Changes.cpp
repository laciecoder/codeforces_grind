#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define int ll
#define print(x) cout << (x) << "\n"
#define vi vector<int>


void solve(){
  int n;
  cin >> n;
  vi arr(n);
  int posodd = 0, negodd = 0, temp = 0;
  for(auto& val: arr){
    cin >> val;
    temp += (val / 2);
    if(val > 0){
      posodd += (val % 2 == 1);
    }
    if(val < 0){
      negodd += (abs(val) % 2 == 1);
    }
  }
  for(auto& val: arr){
    if(temp > 0 && val < 0 && abs(val) % 2 == 1){
      print((val - 1) / 2);
      temp--;
    }
    else if(temp < 0 && val > 0 && val % 2 == 1){
      print((val + 1) / 2);
      temp++;
    }
    else{
      print((val / 2));
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