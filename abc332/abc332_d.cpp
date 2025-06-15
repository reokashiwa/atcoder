#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;
  if ((H < 2) || (H > 5))
    exit(1);
  if ((W < 2) || (W > 5))
    exit(1);

  vector<vector<int>> A(H, vector<int> (W));
  rep (i, H) {
    rep (j, W) {
      int a;
      cin >> a;
      if ((a < 1) || (a > 10e9))
	exit(1);
      A[i][j] = a;
    }
  }

  vector<vector<int>> B(H, vector<int> (W));
  rep (i, H) {
    rep (j, W) {
      int b;
      cin >> b;
      if ((b < 1) || (b > 10e9))
	exit(1);
      B[i][j] = b;
    }
  }

  vector<vector<vector<pair<int, int>>>> D(H, vector<vector<pair<int, int>>> (W));
  rep (i, H) {
    rep (j, W) {
      rep (k, H) {
	rep (l, W) {
	  if (A[i][j] == B[k][l]) {
	    pair<int, int> p(i - k, j - l);
	    D[i][j].push_back(p);
	  }
	}
      }
    }
  }
  rep (i, H) {
    rep (j, W) {
      if (D[i][j].size() > 0) {
	rep (k, D[i][j].size()) {
	  cout << "(" << D[i][j][k].first << ", " << D[i][j][k].second << "), ";
	}
	cout << "\t";
      }
    }
    cout << endl;
  }
}
