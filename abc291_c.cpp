#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);

  vector<vector<int>> pos;
  pos.push_back({0, 0});
  // cout << pos[ 0 ][ 0 ] << ", " << pos[ 0 ][ 1 ] << endl;
  rep (i, N) {
    if (S[i] == 'R')
      pos.push_back({pos[i][0] + 1, pos[i][1]});
    else if (S[i] == 'L')
      pos.push_back({pos[i][0] - 1, pos[i][1]});
    else if (S[i] == 'U')
      pos.push_back({pos[i][0], pos[i][1] + 1});
    else if (S[i] == 'D')
      pos.push_back({pos[i][0], pos[i][1] - 1});
    else
      exit(1);
    
  }
  sort (pos.begin(), pos.end());
  rep (i, N) {
    if ((pos[i][0] == pos[i + 1][0]) && (pos[i][1] == pos[i + 1][1])) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
