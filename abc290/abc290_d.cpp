#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int solver() {
  unsigned int N, D, K;
  cin >> N >> D >> K;
  vector<bool> M(N, false);
  unsigned int A;
  rep (i, N) {
    if (i == 0) {
      M[0] = true;
      K--;
      A = 0;
    } else {
      unsigned int x = (A + D) % N;
      while (M[x] == true)
	x++;
      M[x] = true;
      K--;
      A = x;
    }
    if (K == 0)
      return A;
  }
}

int main() {
  int T;
  cin >> T;
  rep (i, T) {
    cout << solver() << endl;
  }
}









