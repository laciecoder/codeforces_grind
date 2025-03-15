#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define int ll
#define print(x) cout << x << "\n"

vector<int> primes;
void sieve(){
  int limit = 1e7;
  vector<int> isPrime(limit + 1, true);
  isPrime[0] = isPrime[1] = false;
  for(int i = 2; i * i <= limit; i++){
    if(isPrime[i]){
      primes.pb(i);
      for(int j = i * i; j <= limit; j += i){
        isPrime[j] = false;
      }
    }
  }
  // for(int i = 2; i <= limit; i++){
  //   if(isPrime[i]){
  //   }
  // }
  isPrime.clear();
}

int getVal(int a){
  return *lower_bound(all(primes), a);
}

void solve(){
  int d;
  cin >> d;
  int p = getVal(d + 1);
  int q = getVal(p + d);
  print(min(p * q, p * p * p));
}

signed main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t = 1;
  cin >> t;
  sieve();
  while (t--)
  {
    solve();
  }
  return 0;
}