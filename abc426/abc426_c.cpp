#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, Q;
  cin >> N >> Q;
  if ((N < 2) || (N > 10e6))
    exit(1);
  if ((Q < 1) || (Q > 2 * 10e5))
    exit(1);
  vector<int> V(N + 1);
  rep (i, N + 1)
    V[i] = i;

  int lowest = 0; // previous
  rep (i, Q) {
    int x, y;
    cin >> x >> y;
    if ((x < 1) || (x > N))
      exit(1);
    if ((y < 1) || (y > N))
      exit(1);
    if (x >= y)
      exit(1);
    if (x <= lowest) {
      cout << "0" << endl;
    } else {
      cout << V[x] << endl;
      int vx = V[x];
      for (int j = x; j < y; j++)
	V[j] = V[j] - vx;
      lowest = x;
    }
    /*
    rep (j, N + 1)
      cout << V[j] << " ";
    cout << endl;
    */
  }
}
       
