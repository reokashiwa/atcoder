#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 200000))
    exit(1);
  string A, B;
  cin >> A >> B;
  if ((A[0] == '0') || (B[0] == '0'))
    exit(1);

  rep (i, N) {
    string a, b;
    A.copy(a, 0);
    B.copy(b, 0);
    char tmp;
    tmp = a[i];
    a[i] = b[i];
    b[i] = tmp;
    
  }
}
