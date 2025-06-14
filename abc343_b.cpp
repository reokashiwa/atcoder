#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 100))
    exit(1);
  rep (i, N) {
    rep (j, N) {
      int a;
      cin >> a;
      if ((a != 0) && (a != 1))
	exit(1);
      if (a == 1)
	cout << j + 1 << " ";
    }
    cout << endl;
  }
  return 0;
}
