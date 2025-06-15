#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  vector<int> A;
  while (true) {
    int a;
    cin >> a;
    if (a == 0)
      break;
    if ((a < 1) || (a > 10e9))
      exit(1);
    A.push_back(a);
  }
  cout << 0 << endl;
  for (int i = A.size() - 1; i >= 0; i--) {
    cout << A[i] << endl;
  }
  return 0;
}
