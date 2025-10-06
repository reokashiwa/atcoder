#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 10))
    exit(1);
  int sum = 0;
  rep (i, N) {
    if ((i + 1) % 2 == 0)
      sum = sum + pow(i + 1, 3);
    else
      sum = sum - pow(i + 1, 3);
  }
  cout << sum << endl;
}
