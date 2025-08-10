#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int A;
  long long N;
  cin >> A >> N;
  if ((A < 2) || (A > 9))
    exit(1);
  if ((N < 2) || (N > 10e12))
    exit(1);
  int i = 0;
  while (true) {
    if ((N >= pow(10, i)) && (N < pow(10, i+1)))
      break;
    else
      i++;
  }
  while (i >= 0) {
    if (i % 2 == 0) {
    }
    else {
      int n = i;
    }
    i--;
  }
}
