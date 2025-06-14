#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  vector<int> H(N);

  int max = 0;
  int max_i = 0;
  rep(i, n) {
    int j;
    cin >> j;
    if ((j < 1) || (j > 1e9))
      exit(1);
    rep(k, i) {
      if (H.at(k) == j)
	exit(1);
    }
    if (max < j) {
      max = j;
      max_i = i;
    }
    H.at(i) = j;
  }
  cout << max_i + 1 << endl;
}
