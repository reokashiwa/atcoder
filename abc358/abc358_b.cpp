#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, A;
  cin >> N >> A;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((A < 1) || (A > 10e6))
    exit(1);
  int previous_t = -1;
  int last_publish = 0;
  rep(i, N) {
    int t;
    cin >> t;
    if ((t < 0) || (t > 10e6))
      exit(1);
    if (t < previous_t)
	exit(1);
    previous_t = t;
    if (t >= last_publish)
      last_publish = t + A;
    else
      last_publish = last_publish + A;
    cout << last_publish << endl;
  }
}
