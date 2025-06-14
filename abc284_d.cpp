#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool is_prime(long long N) {
  if (N == 1) return false;
  for (long long i = 2; i * i <= N; ++i) {
    if (N % i == 0) return false;
  }
  return true;
}

int main() {
  int T;
  cin >> T;
  if ((T < 1) || (T > 10))
    exit(1);

  rep (j, T) {
    long long N;
    cin >> N;
    if ((N < 1) || (N > 9 * 10e18))
      exit(1);
    
    long long i;
    long long d = -1;
    for (i = 2; i * i * i <= N; i++) {
      if (N % i == 0) {
	d = i;
	break;
      }
    }

    if (d != -1) {
      if (N % (d * d) == 0)
	cout << d << " " << N / d / d << endl;
      else
	cout << (long long) sqrt(N / d) << " " << d << endl;
    } else
      exit(1);
  }
}
