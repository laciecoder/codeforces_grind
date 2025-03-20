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

void solve()
{
  int n, m;
  cin >> m >> n;
  bool B[m][n], A[m][n], C[m][n];
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      cin >> B[i][j];
      A[i][j] = 1;
      C[i][j] = 0;
    }
  }

  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      if (B[i][j] == 0)
      {
        for (int k = 0; k < n; ++k)
        {
          A[i][k] = 0;
        }
        for (int k = 0; k < m; ++k)
        {
          A[k][j] = 0;
        }
      }
    }
  }

  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      if (A[i][j])
      {
        for (int k = 0; k < n; ++k)
        {
          C[i][k] = 1;
        }
        for (int k = 0; k < m; ++k)
        {
          C[k][j] = 1;
        }
      }
    }
  }
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      if (C[i][j] != B[i][j])
      {
        print("NO");
        return;
      }
    }
  }

  print("YES");
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      cout << A[i][j] << " ";
    }
    print("");
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