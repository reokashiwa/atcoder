#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, Q;
  cin >> N >> Q;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  if ((Q < 1) || (Q > 2 * 10e5))
    exit(1);
  vector<int64_t> A(N), B(N);
  rep (i, N) {
    int64_t a;
    cin >> a;
    if ((a < 1) || (a > 10e9))
      exit(1);
    A[i] = a;
  }
  rep (i, N) {
    int64_t b;
    cin >> b;
    if ((b < 1) || (b > 10e9))
      exit(1);
    B[i] = b;
  }
  int64_t sum = 0;
  rep (i, N)
    sum = sum + min(A[i], B[i]);
  rep (i, Q) {
    char c;
    int x;
    int64_t a, b, v;
    cin >> c >> x >> v;
    if ((c != 'A') && (c != 'B'))
      exit(1);
    if ((x < 1) || (x > N))
      exit(1);
    if ((v < 1) || (v > 10e9))
      exit(1);
    x--;
    a = A[x];
    b = B[x];
    if (c == 'A')
      A[x] = v;
    else
      B[x] = v;
    sum = sum - min(a, b) + min(A[x], B[x]);
    cout << sum << endl;
  }
}
