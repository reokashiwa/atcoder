#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, Q;
  cin >> N >> Q;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((Q < 1) || (Q > 100))
    exit(1);
  vector<int> B(N, 0);
  rep (i, Q) {
    int x;
    cin >> x;;
    if ((x < 0) || (x > N))
      exit(1);
    if (x == 0) {
      int min = 100;
      int k = -1;
      rep (j, N) {
	if (B[j] < min) {
	  min = B[j];
	  k = j;
	}
      }
      B[k] = B[k] + 1;
      cout << k + 1;
    } else {
      cout << x;
      x = x - 1;
      B[x] = B[x] + 1;
    }
    if (i < Q - 1)
      cout << " ";
  }
  cout << endl;
}
