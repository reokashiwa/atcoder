#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, Q;
  cin >> N >> Q;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  if ((Q < 1) || (Q > 2 * 10e5))
    exit(1);
  vector<vector<int>> B(N);
  vector<int> index;
  rep (l, Q) {
    int c;
    cin >> c;
    if (c == 1) {
      int i, j;
      cin >> i >> j;
      if ((i < 1) || (i > 2 * 10e5))
	exit(1);
      if ((j < 1) || (j > N))
	exit(1);
      j--;
      bool flag = true;
      rep (k, index.size()) {
	if (index[k] == j) {
	  flag = false;
	  break;
	}
      }
      if (flag)
	index.push_back(j);
      B[j].push_back(i);
    } else if (c == 2) {
      int i;
      cin >> i;
      if ((i < 1) || (i > N))
	exit(1);
      i--;
      sort(B[i].begin(), B[i].end());
      rep (j, B[i].size()) {
	cout << B[i][j] << " ";
      }
      cout << endl;
    } else if (c == 3) {
      int n;
      cin >> n;
      if ((n < 1) || (n > 2 * 10e5))
	exit(1);
      vector<int> C;
      rep (i, index.size()) {
	rep (j, B[index[i]].size()) {
	  if (B[index[i]][j] == n)
	    C.push_back(index[i]);
	}
      }
      sort(C.begin(), C.end());
      int p = -1;
      rep (i, C.size()) {
	if (p == C[i]) {
	  p = C[i];
	  continue;
	} else {
	  p = C[i];	  
	  cout << C[i] + 1 << " ";
	}
      }
      cout << endl;
    } else
      exit(1);
  }
  return 0;
}
