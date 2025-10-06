#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  vector<vector<bool>> G(N + 1, vector<bool>(N + 1, false));
  map<int, bool> routed;
  rep (i, N) {
    int a, b;
    cin >> a >> b;
    if ((a == 0) && (b == 0)) {
    } else {
      if ((a < 1) || (a > N))
	exit(1);
      if ((b < 1) || (b > N))
	exit(1);
    }
    G[i + 1][a] = true;
    G[a][i + 1] = true;
    G[i + 1][b] = true;
    G[b][i + 1] = true;
  }
  /*
  rep (i, N + 1) {
    rep (j, N + 1)
      cout << G[i][j] << " ";
    cout << endl;
  }
  */
  vector<int> route;
  route.push_back(0);
  while (route.size() != 0) {
    int pp = route[route.size() - 1]; // route末尾をpresent position (pp)とする
    // cout << "pp = " << pp << endl;
    routed[pp] = true; // ppは到達済みとする。
    /*
    cout << "[";
    for (auto p : routed)
      cout << p.first << ", ";
    cout << "]" << endl;
    */
    for (int i = pp + 1; i < N + 1; i++) {
      if (G[pp][i]) {
	if (routed[i])
	  continue;
	else {
	  route.push_back(i);
	  /*
	  rep (j, route.size() - 1)
	    cout << route[j] << " -> ";
	  cout << route[route.size() - 1 ] << endl;
	  */
	  break;
	}
      }
    }
    if (pp == route[route.size() - 1])
      route.pop_back();
  }
  
  cout << routed.size() - 1 << endl;
}
