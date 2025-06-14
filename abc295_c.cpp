#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep (i, N) {
    int a;
    cin >> a;
    A[i] = a;
  }
  sort (A.begin(), A.end());

  int combination = 0;
  rep (i, N) {
    int length = 0;
    for (int j = i + 1; j < N; j++) {
      if (A[i] == A[j]) {
	length ++;
	continue;
      } else
	break;
    }
    if (length > 0) {
      combination = combination + (length + 1) / 2;
      i = i + length - 1;
    }
  }
  cout << combination << endl;
}
