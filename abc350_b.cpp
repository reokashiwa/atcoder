#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, Q;
  cin >> N >> Q;
  if ((N < 1) || (N > 1000))
    exit(1);
  if ((Q < 1) || (Q > 1000))
    exit(1);
  set<int> T;
  rep (i, N)
    T.insert(i);

  rep (i, Q) {
    int t;
    cin >> t;
    if ((t < 1) || (t > N))
      exit(1);
    if (T.count(t - 1))
      T.erase(t - 1);
    else
      T.insert(t - 1);
  }
  cout << T.size() << endl;
  return 0;
}
