#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 10e5))
    exit(1);
  vector<vector<int>> A(N, vector<int>(3, -1));
  rep (i, 3 * N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > N))
      exit(1);
    a--;
    rep (j, 3) {
      if (A[a][j] == -1) {
	A[a][j] = i;
	break;
      }
    }
  }
  vector<vector<int>> F(N, vector<int>(2));
  rep (i, N) {
    vector<int> fi = {A[i][1] + 1, i};
    F[i] = fi;
  }
  sort(F.begin(), F.end());
  rep (i, N) {
    cout << F[i][1] + 1 << " ";
  }
  cout << endl;
}
