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

void solve()
{
  int N;
  cin >> N;
  vi A(N);
  unordered_map<int, int> freq;
  for(auto& val: A){
    cin >> val;
    freq[val]++;
  }
  int max_value = -1;
  int max_index = -1;
  for (int i = 0; i < N; ++i)
  {
    if (freq[A[i]] == 1)
    {
      if (A[i] > max_value)
      {
        max_value = A[i];
        max_index = i + 1;
      }
    }
  }
  print(max_index);
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
