#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 10e9))
    exit(1);

  int B = 0;
  rep (i, 35) {
    if (N < pow(2, i)) {
      B = i - 1;
      break;
    }
  }
  string d;
  for (int i = B; i >= 0; i--) {
    if (N >= pow(2, i)) {
      N = N - pow(2, i);
      d.push_back('1');
    } else {
      d.push_back('0');
    }
  }
  int n = 0;
  for (int i = d.size() - 1; i >= 0; i--) {
    if (d[i] == '0') {
      n++;
      continue;
    } else
      break;
  }
  cout << n << endl;
}
