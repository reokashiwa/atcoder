#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 50))
    exit(1);
  vector<int> D(N);
  rep (i, N) {
    int d;
    cin >> d;
    if ((d < 1) || (d > 100))
      exit(1);
    D[i] = d;
  }
  rep (i, N - 1) {
    int sum = 0;
    for (int j = i; j < N - 2; j++) {
      sum = sum + D[j];
      cout << sum << " ";
    }
    cout << sum + D[N - 1] << endl;
  }
}
