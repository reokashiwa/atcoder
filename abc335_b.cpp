#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 0) || (N > 21))
    exit(1);

  rep (x, N + 1) {
    rep (y, N + 1) {
      rep (z, N + 1) {
	if (x + y + z <= N)
	  cout << x << " " << y << " " << z << endl;
	else
	  break;
      }
    }
  }
  return 0;
}
