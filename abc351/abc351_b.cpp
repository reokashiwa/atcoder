#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  vector<string> A(N);
  rep (i, N) {
    string a;
    cin >> a;
    if (a.size() != N)
      exit(1);
    A[i] = a;

  }
  rep (i, N) {
    string b;
    cin >> b;
    if (b.size() != N)
      exit(1);
    rep (j, N) {
      if (A[i][j] != b[j]) {
	cout << i + 1 << " " << j + 1 << endl;
	return 0;
      }
    }
  }
  return 0;
}
