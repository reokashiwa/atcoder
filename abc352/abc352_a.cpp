#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;
  if ((N < 3) || (N > 100))
    exit(1);
  if ((X < 1) || (X > N))
    exit(1);
  if ((Y < 1) || (Y > N))
    exit(1);
  if ((Z < 1) || (Z > N))
    exit(1);
  if (X > Y)
    swap(X, Y);
  if ((X <= Z) && (Y >= Z))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
