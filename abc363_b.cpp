#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, T, P;
  cin >> N >> T >> P;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((T < 1) || (T > 100))
    exit(1);
  if ((P < 1) || (P > N))
    exit(1);
  vector<int> L(N);
  rep (i, N) {
    int l;
    cin >> l;
    if ((l < 1) || (l > 100))
      exit(1);
    L[i] = l;
  }
  sort(L.begin(), L.end());
  int a = T - L[N - P];
  if (a < 0)
    cout << 0;
  else
    cout << a;
  cout << endl;
}
