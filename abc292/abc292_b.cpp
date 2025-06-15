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

  vector<int> n(N + 1, 0);
  rep(i, Q) {
    int c, x;
    cin >> c >> x;
    switch (c) {
    case 1:
      n[x] = n[x] + 1;
      break;
    case 2:
      n[x] = n[x] + 2;
      break;
    case 3:
      if (n[x] > 1)
	cout << "Yes" << endl;
      else
	cout << "No" << endl;
      break;
    }
  }
}
