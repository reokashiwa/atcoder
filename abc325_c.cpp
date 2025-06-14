#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool recursive_dfs(vector<string>& S, vector<vector<bool>>& isUsed, int H, int W, int i, int j) {
  for (int dh = -1; dh <= 1; dh++) {
    for (int dw = -1; dw <= 1; dw++) {
      int pi = i + dh;
      int pj = j + dw;
      if ((pi < 0) || (pi >= H))
	continue;
      if ((pj < 0) || (pj >= W))
	continue;
      if ((dw == 0) && (dh == 0))
	continue;
      if ((S[pi][pj] == '#') && (isUsed[pi][pj] == false)) {
	isUsed[pi][pj] = true;
	if (recursive_dfs(S, isUsed, H, W, pi, pj) == false)
	  return false;
      }
    }
  }
  return true;
}

int main() {
  int H, W;
  cin >> H >> W;
  if ((H < 1) || (H > 1000))
    exit(1);
  if ((W < 1) || (W > 1000))
    exit(1);
  
  vector<string> S(H);
  rep (i, H) {
    string s;
    cin >> s;
    if (s.size() > W)
      exit(1);
    S[i] = s;
  }

  vector<vector<bool>> isUsed(H, vector<bool>(W, false));
  int id = 0;
  rep (i, H) {
    rep (j, W) {
      /* without recursive approach
      if ((S[i][j] == '.') || (isUsed[i][j]))
	continue;
      isUsed[i][j] = true;
      queue<pair<int, int>> q;
      q.push({i, j});
      while (! q.empty()) {
	pair<int, int> p = q.front();
	q.pop();
	int x = p.first;
	int y = p.second;
	for (int dx = -1; dx <= 1; dx++) {
	  for (int dy = -1; dy <= 1; dy++) {
	    if ((dx == 0) && (dy == 0))
	      continue;
	    int px = x + dx;
	    int py = y + dy;
	    if ((px < 0) || (px >= H))
	      continue;
	    if ((py < 0) || (py >= W))
	      continue;
	    if ((S[px][py] == '#') && (! isUsed[px][py])) {
	      isUsed[px][py] = true;
	      q.push({px, py});
	    }
	  }
	}
      }
      id++;
      */

      /* isUsed debug
      cout << id << endl;
      rep (x, H) {
	rep (y, W) {
	  cout << isUsed[x][y];
	}
	cout << endl;
      }
      cout << endl;
      */
      
      /* recursive approach */
      if ((S[i][j] == '#') && (isUsed[i][j] == false)) {
	isUsed[i][j] = true;
	if (recursive_dfs(S, isUsed, H, W, i, j) == false)
	  exit(1);
	id ++;
      }
    }
  }
  cout << id << endl;
}
