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

vi isLucky(1001);
vi luckyNums;
unordered_set<int> lnums = {4, 7};

bool isLuckyNumber(int n){
  bool yes = true;
  while(n > 0){
    int rem = n % 10;
    n /= 10;
    yes &= lnums.count(rem);
  }
  return yes;
}

void precompute(){
  for(int i = 1; i <= 1000; i++){
    if(isLuckyNumber(i)){
      luckyNums.pb(i);
      isLucky[i] = true;
    }
  }
}

bool check(int n){
  int i = 0;
  while(i < luckyNums.size() && luckyNums[i] <= n){
    if(n % luckyNums[i] == 0)
      return true;
    i++;
  }
  return false;
}

void compute(){
  for(int i = 1; i <= 1000; i++){
    if(isLucky[i] == false && check(i))
      isLucky[i] = true;
  }
}

void solve(){
  int n;
  cin >> n;
  print((isLucky[n] ? "YES" : "NO"));
}

signed main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t = 1;
  // cin >> t;
  precompute();
  compute();
  while (t--)
  {
    solve();
  }
  return 0;
}