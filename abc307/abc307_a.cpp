#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 10))
    exit(1);
  int sum = 0;
  rep (i, N * 7) {
    int a;
    cin >> a;
    sum = sum + a;
    if (((i + 1) % 7 == 0) && (i > 0)) {
      cout << sum << " ";
      sum = 0;
    }
  }
  cout << endl;
}
