#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) | (N > 100))
    exit(1);
  vector<vector<int>> C(N);
  rep (i, N * 2) {
    int a;
    cin >> a;
    if ((a < 1) || (a > N))
      exit(1);
    a--;
    if (C[a].size() == 0) {
      vector<int> c = {i};
      C[a] = c;
    } else if (C[a].size() == 1)
      C[a].push_back(i);
    else if (C[a].size() > 1)
      exit(1);
  }
  int c = 0;
  rep (i, N) {
    if (C[i][1] - C[i][0] == 2)
      c++;
  }
  cout << c << endl;
}
