#include <cstdint> // int64_t, int*_t
#include <vector> // vector
#include <string> // string
#include <algorithm> // reverse
#include <iostream> // cout, endl, cin
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int64_t X, Y;
  cin >> X >> Y;
  if ((X < 1) || (X > 10e5))
    exit(1);
  if ((Y < 1) || (Y > 10e5))
    exit(1);
  vector<int64_t> A(10);
  A[0] = X;
  A[1] = Y;
  for (int i = 2; i < 10; i++) {
    string s = to_string(A[i - 2] + A[i - 1]);
    reverse(s.begin(), s.end());
    A[i] = stoll(s);
  }
  cout << A[9] << endl;
}
