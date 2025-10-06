#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M, K;
  cin >> N >> M >> K;
  if ((N < 1) || (N > 10))
    exit(1);
  if ((M < 1) || (M > 10))
    exit(1);
  if (K < 1)
    exit(1);
  vector<vector<bool>> R(N, vector<bool>(M, false));
  rep (i, K) {
    int a, b;
    cin >> a >> b;
    if ((a < 1) || (a > N))
      exit(1);
    if ((b < 1) || (b > M))
      exit(1);
    a--;
    b--;
    R[a][b] = true;
    bool flag = true;
    rep (j, M) {
      if (R[a][j] == false) {
	flag = false;
	break;
      }
    }
    if (flag)
      cout << a + 1 << " ";
  }
  cout << endl;
}
