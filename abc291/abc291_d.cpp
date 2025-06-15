#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  vector<vector<int>> card;
  rep (i, N) {
    int a, b;
    cin >> a >> b;
    if ((a < 1) || (a > 10e9))
      exit(1);
    if ((b < 1) || (b > 10e9))
      exit(1);
    card.push_back({a, b});
  }
}
