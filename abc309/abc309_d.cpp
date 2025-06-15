#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N1, N2, M;
  cin >> N1 >> N2 >> M;
  if ((N1 < 1) && (N1 > 1.5 * 10e5))
    exit(1);
  if ((N2 < 1) && (N2 > 1.5 * 10e5))
    exit(1);
  if ((M < 0) && (M > 3 * 10e5))
    exit(1);
  vector<pair<int, int>> AB(M);
  rep (i, M) {
    int a, b;
    cin >> a >> b;
    if (a > b)
      exit(1);
    if ((a < 1) || (a > N1 + N2))
      exit(1);
    if ((b < 1) || (b > N1 + N2))
      exit(1);
    for (int j = 0; j < i; j++) {
      if ((AB[i].first == a) && (AB[i].second == b))
	exit(1);
    }
    AB[i] = make_pair(a, b);
  }
}
