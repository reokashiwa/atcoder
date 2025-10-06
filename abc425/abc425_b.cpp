#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 10))
    exit(1);
  vector<int> C(N + 1, 0);
  vector<int> P(N + 1, 0);
  int num_a_minor = 0;
  rep (i, N) {
    int a;
    cin >> a;
    if (((a < 1) || (a > N)) && (a != -1))
      exit(1);
    if (a != -1) {
      C[a]++;
      P[i + 1] = a;
      if (C[a] > 1) {
	cout << "No" << endl;
	return 0;
      }
    } else
      num_a_minor++;
  }
  for (int i = 1; i < N + 1; i++) {
    if (P[i] == 0) {
      for (int j = 1; j < N + 1; j++) {
	if (C[j] == 0) {
	  C[j]++;
	  P[i] = j;
	  break;
	} else
	  continue;
      }
    } else
      continue;
  }
  cout << "Yes" << endl;
  for (int i = 1; i < N + 1; i++)
    cout << P[i] << " ";
  cout << endl;
}
