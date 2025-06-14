#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  vector<int> A;
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 0) || (a > 10e9))
      exit(1);
    A.push_back(a);
    bool flag = true;
    while (flag) {
      int s = A.size();
      if (s <= 1)
	break;
      if (A[s - 2] == A[s - 1]) {
	A.pop_back();
	A[s - 2] ++;
      } else
	break;
    }
  }
  cout << A.size() << endl;
  return 0;
}
