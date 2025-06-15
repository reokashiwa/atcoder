#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 16))
    exit(1);
  vector<vector<int>> D(N, vector<int> (N, 0));
  rep (i, N - 1) {
    for (int j = i + 1; j < N; j++) {
      int d;
      cin >> d;
      if ((d < 1) || (d > 10e19))
	exit(1);
      D[i][j] = d;
      D[j][i] = d;
    }
  }
  
}
