#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  int max = 0;
  int max_count = 0;
  int p0;
  rep (i, N) {
    int p;
    cin >> p;
    if (i == 0)
      p0 = p;
    if (p > max) {
      max_count = 0;
      max = p;
    } else if (p == max)
      max_count ++;
  }
  if ((p0 == max) && (max_count == 0))
    cout << 0 << endl;
  else 
    cout << max - p0 + 1 << endl;

}
