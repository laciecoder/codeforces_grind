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

char board[8][8];


bool isPossible(int rowIdx, int colIdx){
  int x = rowIdx, y = colIdx;
  while(y >= 0 && x >= 0){
    if(board[x--][y--] == 'Q')
      return false;
  }
  x = rowIdx, y = colIdx;
  while(y >= 0){
    if(board[x][y--] == 'Q')
      return false;
  }
  y = colIdx, x = rowIdx;
  while(x < 8 && y >= 0){
    if(board[x++][y--] == 'Q')
      return false;
  }
  return true;
}


void nqueen(int colIdx, int& count){
  if(colIdx == 8){
    count++;
    return;
  }

  for(int rowIdx = 0; rowIdx < 8; rowIdx++){
    if(board[rowIdx][colIdx] != '*' && isPossible(rowIdx, colIdx)){
      board[rowIdx][colIdx] = 'Q';
      nqueen(colIdx + 1, count);
      board[rowIdx][colIdx] = '.';
    }
  }
}

void solve(){
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      cin >> board[i][j];
    }
  }
  int count = 0;
  nqueen(0, count);
  print(count);
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