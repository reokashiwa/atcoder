#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  vector<vector<int>> A(9, vector<int>(9));
  rep (i, 9) {
    vector<int> ON(9, 0);
    rep (j, 9) {
      int a;
      cin >> a;
      if ((a < 1) || (a > 9))
	exit(1);
      ON[a - 1]++;
      if (ON[a - 1] > 1) {
	cout << "No" << endl;
	return 0;
      }
      A[i][j] = a - 1;
    }
  }

  rep (j, 9) {
    vector<int> ON(9, 0);
    rep (i, 9) {
      ON[A[i][j]]++;
      if (ON[A[i][j]] > 1) {
	cout << "No" << endl;
	return 0;
      }
    }
  }

  rep (i, 3) {
    rep (j, 3) {
      vector<int> ON(9, 0);
      rep (k, 3) {
	rep (l, 3) {
	  ON[A[i * 3 + k][j * 3 + l]]++;
	  if (ON[A[i * 3 + k][j * 3 + l]] > 1) {
	    cout << "No" << endl;
	    return 0;
	  }
	}
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}
