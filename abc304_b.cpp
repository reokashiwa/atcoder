#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 0) || (N > 1e9 - 1))
    exit(1);
  if (N < 1e3)
    cout << N << endl;
  else {
    for (int i = 4; i < 10; i++) {
      if ((N >= pow(10, i - 1)) && (N < pow(10, i))) {
	int n = (int) (N / pow(10, i - 3)) * pow(10, i - 3);
	cout << n << endl;
	break;
      }
    }
  }
  return 0;
}
