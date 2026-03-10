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

int fact[9] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320};

bool nextperm(string &str)
{
  int n = str.size();

  int i = n - 2;

  while (i >= 0 && str[i] >= str[i + 1])
    i--;
  if (i < 0)
    return false;
  
  int j = n - 1;

  while (str[j] <= str[i]){
    j--;
  }
  
  swap(str[i], str[j]);

  reverse(str.begin() + i + 1, str.end());

  return true;
}

void solve()
{
  string str;
  cin >> str;
  int n = str.size();
  map<int, int> mp;
  for (char ch : str)
  {
    mp[ch]++;
  }
  int ways = fact[n];
  for (auto [k, v] : mp)
    ways /= fact[v];
  print(ways);
  sort(all(str));
  do
  {
    print(str);
  } while (nextperm(str));
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