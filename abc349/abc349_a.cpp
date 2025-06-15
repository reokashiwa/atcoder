#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 100))
    exit(1);
  int sum = 0;
  rep (i, N - 1) {
    int a;
    cin >> a;
    if ((a < -100) || (a > 100))
      exit(1);
    sum = sum + a;
  }
  cout << sum * (-1) << endl;
}
