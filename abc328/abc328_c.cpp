#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, Q;
  cin >> N >> Q;
  if ((N < 1) || (N > 3 * 10e5))
    exit(1);
  if ((Q < 1) || (Q > 3 * 10e5))
    exit(1);
  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);

  vector<int> SS(N - 1);
  int sum = 0;
  rep (i, N - 1) {
    if (S[i] == S[i + 1])
      sum++;
    SS[i] = sum;
    // cout << sum << " ";
  }
  cout << endl;
  rep (i, Q) {
    int l, r;
    cin >> l >> r;
    if ((l < 1) || (l > N))
      exit(1);
    if ((r < 1) || (r > N))
      exit(1);
    if (l > r)
      exit(1);
    cout << SS[r - 1 - 1] - (SS[l - 1] - 1) << endl;
  }
  return 0;
}
