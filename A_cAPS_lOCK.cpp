#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define int ll
#define print(x) cout << (x) << "\n"

// Let's consider that a word has been typed with the Caps lock key accidentally switched on, if:

// either it only contains uppercase letters;
// or all letters except for the first one are uppercase.

void solve(){
  string str, copy;
  cin >> str;
  copy = str;
  int upper = 0;
  for(int i = 0; i < str.size(); i++){
    char ch = str[i];
    upper += isupper(ch);
    if(i == 0){
      str[i] = toupper(ch);
    }
    else{
      str[i] = tolower(ch);
    }
  }
  if (upper == str.size()){
    str[0] = tolower(str[0]);
    print(str);
  }
  else if((upper == (str.size() - 1) && islower(copy[0])))
    print(str);
  else  
    print(copy);
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