#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, T;
  cin >> N >> T;
  if ((N < 2) || (N > 2 * 10e3))
    exit(1);
  int t = (int)pow(N, 2);
  if ((T < 1) || (T > min(pow(N, 2), 2 * 10e5)))
    exit(1);
  vector<int> A(t);

  vector<vector<int>> M(N);
  vector<vector<int>> MT(N);
  vector<vector<int>> D(2);

  rep (i, T) {
    int a;
    cin >> a;
    a--;
    /*
    if ((a < 1) || (a > pow(N, 2)))
      exit(1);
    */
    M[(int)(a / N)].push_back(a);
    MT[a % N].push_back(a);
    if (a % N == (int)(a / N))
      D[0].push_back(a);
    if (N - 1 - a % N == (int)(a / N))
      D[1].push_back(a);

    rep (j, N) {
      if ((M[j].size() == N) || (MT[j].size() == N)) {
	cout << i + 1 << endl;
	return 0;
      }
    }
    rep (j, 2) {
      if (D[j].size() == N) {
	/*
	rep (k, D[j].size())
	  cout << D[j][k] << " ";
	cout << endl;
	*/
	cout << i + 1 << endl;
	return 0;
      }
    }
  }

  cout << -1 << endl;
  return 0;
}
