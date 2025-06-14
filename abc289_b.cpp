#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((M < 0) || (M > N - 1))
    exit(1);
  vector<int> a(M);
  rep (i, M) {
    int n;
    cin >> n;
    if ((n < 1) || (n > N - 1))
      exit(1);
    rep (j, i) {
      if (a[j] > n)
	exit(1);
    }
    a[i] = n - 1;
  }

  vector<vector<int>> A;
  rep (i, N) {
    bool flag = false;
    int j;
    for (j = 0; j < A.size(); j++) {
      rep (k, A[j].size()) {
	if (A[j][k] == i) {
	  flag = true;
	  break;
	}
      }
      if (flag == true)
	break;
    }

    if (flag == false) {
      vector<int> b = {i};
      A.push_back(b);
    }

    rep (k, M) {
      if (a[k] == i) {
	int l;
	flag = false;
	for (l = 0; l < A.size(); l++) {
	  rep (m, A[l].size()) {
	    if (A[l][m] == i) {
	      flag = true;
	      break;
	    }
	  }
	  if (flag == true)
	    break;
	}
	A[l].push_back(i + 1);
	break;
      }
    }
  }

  rep (i, A.size()) {
    for (int j = A[i].size(); j > 0 ; j--) {
      cout << A[i][j - 1] + 1 << " ";
    // rep (j, A[i].size()) {
      // cout << A[i][j] << ", ";
    }
    // cout << endl;
  }
}
