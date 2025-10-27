#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 2) || (N > 100))
    exit(1);
  if ((M < 0) || (M > 10000))
    exit(1);
  int sum = 0;
  vector<int> A(N);
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 0) || (a > 100))
      exit(1);
    A[i] = a;
    sum = sum + a;
  }
  rep (i, N) {
    if (A[i] == (sum - M)) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
