#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 5000))
    exit(1);
  long long a, b;
  cin >> a >> b;
  if ((a < 1) || (a > 10e9))
    exit(1);
  if ((b < 1) || (b > 10e9))
    exit(1);
  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);

  long long min_cost = 0;
  rep (i, N) {
    long long cost = 0 + a * i;
    string newS;
    for (int k = i; k < N; k++) {
      newS.push_back(S[k]);
    }
    rep (k, i) {
      newS.push_back(S[k]);
    }

    rep (j, N / 2) {
      if (newS[j] != newS[N - j - 1])
	cost = cost + b;
    }

    if (i == 0)
      min_cost = cost;
    else if (cost < min_cost)
      min_cost = cost;
  }
  cout << min_cost << endl;
}
