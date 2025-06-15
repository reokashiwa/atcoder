#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  unsigned long long K;
  cin >> K;
  if ((K < 2) || (K > 1e12))
    exit(1);

  vector<int> F;
  unsigned long long N;

  int i;
  for (i = 2 ; i < (int) sqrt(K); i++) {
    if (K % i == 0)
      F.push_back(i);
  }
  if (F.size() == 0)
    cout << K << endl;
  else {
    for (i = 1 ; i < F.at(F.size() - 1) ; i++) {
      if (i == 1)
	N = 1;
      else
	N = N * i;

      if (K % N == 0) {
	cout << i + 1 << endl;
	return 0;
      }
    }
    cout << K << endl;
  }
  return 0;
}
