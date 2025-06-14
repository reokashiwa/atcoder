#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  map<int, vector<int>> CA;
  rep (i, N) {
    int a, c;
    cin >> a >> c;
    if ((a < 1) || (a > 10e9))
      exit(1);
    if ((c < 1) || (c > 10e9))
      exit(1);
    CA[c].push_back(a);
  }

  vector<pair<int, int>> CM;
  for (auto p : CA) {
    vector<int> C = p.second;
    sort(C.begin(), C.end());
    CM.push_back(make_pair(p.first, C[0]));
  }
  int max = 0;
  for (auto p : CM) {
    if (p.second > max)
      max = p.second;
  }
  cout << max;
  return 0;
}
