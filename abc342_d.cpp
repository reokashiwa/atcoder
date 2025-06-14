#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 2 * 10e5))
    exit(1);
  vector<vector<int>> A(N);
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 0) || (a > 2 * 10e5))
      exit(1);
    vector<int> PF;
    int p = 2;
    while (true) {
      if (a % p == 0) {
	PF.push_back(p);
	a = a / p;
      } else
	p++;
      if (a == 1)
	break;
    }
    A[i] = PF;
  }
  rep (i, N) {
    cout << i << ": ";
    rep (j, A[i].size() - 1) {
      cout << A[i][j] << ", ";
    }
    cout << A[i][A[i].size() - 1] << endl;
  }

  int answer = 0;
  rep (i, N) {
    for (int j = i + 1; j < N; j++) {
      int sqrt_AiAj = int(sqrt(A[i] * A[j]));
      if (A[i] * A[j] == sqrt_AiAj * sqrt_AiAj)
	answer++;
    }
  }
  cout << answer << endl;
  
  return 0;
}
