#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 2) || (N > 2 * 10e5))
    exit(1);
  if ((M < 0) || (M > 2 * 10e5))
    exit(1);
  vector<vector<int>> UV(M, vector<int>(2));
  rep (i, M) {
    int u, v;
    cin >> u >> v;
    if ((u < 1) || (u > N))
      exit(1);
    if ((v < 1) || (v > N))
      exit(1);
    if (u < v) {
      UV[i][0] = u;
      UV[i][1] = v;
    } else {
      UV[i][0] = v;
      UV[i][1] = u;
    }
  }
  sort(UV.begin(), UV.end());
  /*
  rep (i, M) {
    cout << UV[i][0] << ", " << UV[i][1] << endl;
  }
  */
  rep (i, M) {
    
  }

}
