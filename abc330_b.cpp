#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, L, R;
  cin >> N >> L >> R;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  if ((L < 1) || (N > 10e9))
    exit(1);
  if ((R < 1) || (R > 10e9))
    exit(1);
  if (L > R)
    exit(1);
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > 10e9))
      exit(1);
    
  }
  
}
