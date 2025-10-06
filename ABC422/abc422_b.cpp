#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;
  if ((H < 1) || (H > 20))
    exit(1);
  if ((W < 1) || (W > 20))
    exit(1);
  vector<vector<int>> S(H, vector<int> (W, 0));
  vector<pair<int, int>> B;
  rep (i, H) {
    string s;
    cin >> s;
    if (s.size() != W)
      exit(1);
    rep (j, W) {
      if ((s[j] != '.') && (s[j] != '#'))
	exit(1);
      if (s[j] == '#') {
	pair<int, int> p;
	p = make_pair(i, j);
	B.push_back(p);
	if ((j >= 0) && (j < W - 1))
	  S[i][j + 1]++;
	if ((j > 0) && (j < W))
	  S[i][j - 1]++;
	if ((i >= 0) && (i < H - 1))
	  S[i + 1][j]++;
	if ((i > 0) && (i < H))
	  S[i - 1][j]++;
      }
    }
  }
  rep (i, B.size()) {
    if ((S[B[i].first][B[i].second] != 2) &&
	(S[B[i].first][B[i].second] != 4)) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
