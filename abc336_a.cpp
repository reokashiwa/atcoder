#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 2024))
    exit(1);
  cout << 'L';
  rep (i, N)
    cout << 'o';
  cout << "ng" << endl;

  return 0;
}
