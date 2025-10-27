#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 3) || (N > 2 * 10e5))
    exit(1);
  map<int, int64_t> R;
  rep (i, N) {
    int64_t a;
    cin >> a;
    if ((a < 1) || (a > N))
      exit(1);
    if (R.count(a))
      R[a]++;
    else
      R[a] = 1;
  }
  int64_t count = 0;
  for (auto p : R) {
    auto v = p.second;
    if (v > 1)
      count = count + (v * (v - 1)) / 2 * (N - v);
  }
  cout << count << endl;
}
