#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  unsigned long long sum = 0;
  rep (i, 64) {
    long long a;
    cin >> a;
    if ((a != 0) && (a != 1))
      exit(1);
    if (a == 1) {
      unsigned long long s = 1;
      rep (j, i) {
	s = s * 2;
      }
      sum = sum + s;
    }
      
  }
  cout << sum << endl;
  return 0;
}
