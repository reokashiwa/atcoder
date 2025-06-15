#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
  cin >> N;
  if ((N < 1) || (N > 3 * 10e5))
    exit(1);
  vector<int> A(N, 0);
  
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < -1) || (a > N) || (a == 0))
      exit(1);
    if (a == -1)
      A[0] = i;
    else
      A[a] = i;
  }
  int i = 0;
  while (N > 0) {
    cout << A[i] << " ";
    i = A[i];
    N--;
  }
  cout << endl;
  return 0;
}

4 1
1 2
-1 3
5 4
3 5
2 6

0 2
1
2 5
