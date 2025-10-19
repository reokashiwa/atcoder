#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  int sum = 0;
  rep (i, N) {
    if (i == 0)
      sum = 1;
    else {
      string f = to_string(sum);
      int f_sum = 0;
      rep (j, f.size())
	f_sum = f_sum + f[j] - '0';
      sum = sum + f_sum;
    }
  }
  cout << sum << endl;
}
