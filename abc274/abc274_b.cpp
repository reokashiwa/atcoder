#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;
  if ((H < 1) || (H > 1000))
    exit(1);
  if ((W < 1) || (W > 1000))
    exit(1);
  
  vector<vector<int>> C(H, vector<int>(W));

  rep (i, H) {
    rep (j, W) {
      char c;
      cin >> c;
      if ((c == '.') || (c == '#'))
        C.at(i).at(j) = c;
      else
        exit(1);
    }
  }

  vector<int> X(W, 0);
  rep (i, H) {
    rep (j, W) {
      if (C.at(i).at(j) == '#')
	X.at(j) = X.at(j) + 1;
    }
  }

  rep (j, W - 1) {
    cout << X.at(j) << " ";
  }
  cout << X.at(W - 1) << endl;
}
