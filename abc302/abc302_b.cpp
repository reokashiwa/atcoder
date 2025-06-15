#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dfs (vector<vector<vector<int>>> SNUKE, vector<vector<int>> P) {
  string snuke = "snuke";
  rep (i, SNUKE[P.size()].size()) {
    P.push_back(SNUKE[P.size()][i]);
    int dr = P[1][0] - P[0][0], dc = P[1][1] - P[0][1];
    bool flag = true;
    if (P.size() > 2) {
      for (int j = 1; j < snuke.size() - 1; j++) {
	if ((P[j + 1][0] - P[j][0] != dr) || (P[j + 1][1] - P[j][1] != dc))
	  flag = false;
      }
      if (flag) {
	if (P.size() == snuke.size()) {
	  return 0;
	} else if (dfs(SNUKE, P) == 0)
	  return 0;
      } else {
	P.pop_back();
	continue;
      }
    } else {
      if (dfs(SNUKE, P) == 0)
	return 0;
    }
    P.pop_back();
  }
  return 1;
}

int main() {
  int H, W;
  cin >> H >> W;
  if ((H < 5) || (H > 100))
    exit(1);
  if ((W < 5) || (W > 100))
    exit(1);
  string snuke="snuke";
  vector<vector<vector<int>>> SNUKE(H);
  rep (i, H) {
    string s;
    cin >> s;
    if (s.size() != W)
      exit(1);
    rep (j, W) {
      if ((s[j] < 'a') || (s[j] > 'z'))
	exit(1);
      vector<int> hw = {i, j};
      rep (k, snuke.size()) {
	if (s[j] == snuke[k])
	  SNUKE[k].push_back(hw);
      }
    }
  }
  rep (i, snuke.size()) {
    cout << snuke[i] << ": ";
    rep (j, SNUKE[i].size()) {
      cout << "(" << SNUKE[i][j][0] << ", " << SNUKE[i][j][1] << "), ";
    }
    cout << endl;
  }
  vector<vector<int>> P;
  if (dfs(SNUKE, P) == 0) {
    rep (i, snuke.size()) {
      cout << P[i][0] + 1 << " " << P[i][1] + 1 << endl;
    }
    return 0;
  }
  else
    return 1;
}
