#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define int ll
#define print(x) cout << x << endl;

// xor for 1 to n
int computeXOR(int n)
{

  // If n is a multiple of 4
  if (n % 4 == 0)
    return n;

  // If n%4 gives remainder 1
  if (n % 4 == 1)
    return 1;

  // If n%4 gives remainder 2
  if (n % 4 == 2)
    return n + 1;

  // If n%4 gives  3
  return 0;
}

void solve()
{
  int a, b;
  cin >> a >> b;
  int nxor = computeXOR(a - 1);
  if (nxor == b)
  {
    print(a);
  }
  else if (nxor != b && (nxor ^ b) != a)
  {
    print(a + 1);
  }
  else
  {
    print(a + 2);
  }
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