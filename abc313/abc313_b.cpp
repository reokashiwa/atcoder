#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 2) || (N > 50))
    exit(1);
  if ((M < 0) || (M > N * (N - 1) /2))
    exit(1);
  vector<vector<int>> path;
  
  rep (i, M) {
    int a, b;
    cin >> a >> b;
    if ((a < 1) || (a > N))
      exit(1);
    if ((b < 1) || (b > N))
      exit(1);
    if (a == b)
      exit(1);
    bool flag = false;
    rep (j, path.size()) {
      if (path[j][0] == b) {
	vector<int> p;
	p.push_back(a);
	rep (k, path[j].size())
	  p.push_back(path[j][k]);
	path[j] = p;
	flag = true;
	break;
      }
      if (path[j][path[j].size() - 1] == a) {
	path[j].push_back(b);
	flag = true;
	break;
      }
    }
    if (! flag) {
      vector<int> p = {a, b};
      path.push_back(p);
    }
  }
  /*
  rep (i, path.size()) {
    rep (j, path[i].size()) {
      cout << path[i][j] << " ";
    }
    cout << endl;
  }
  */
  rep (i, path.size()) {
    for (int j = i + 1; j < path.size(); j++) {
      if (path[i][0] == path[j][path[j].size() - 1]) {
	rep (k, path[i].size())
	  path[j].push_back(path[i][k]);
	path[i] = {};
	continue;
      }
      if (path[i][path[i].size() - 1] == path[j][0]) {
	rep (k, path[j].size())
	  path[i].push_back(path[j][k]);
	path[j] = {};
	continue;
      }
    }
  }
  rep (i, path.size()) {
    if (path[i].size() == N) {
      cout << path[i][0] << endl;
      return 0;
    }
  }
  cout << "-1" << endl;
  return 0;
  
}
