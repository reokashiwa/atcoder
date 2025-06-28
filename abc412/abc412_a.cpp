#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  int n = 0;
  rep (i, N) {
    int a, b;
    cin >> a >> b;
    if (a < b) n = n + 1;
  }
  cout << n << endl;
}
