#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 20))
    exit(1);
  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);
  string T = "TEA";
  if (N >= 3) {
    int j = 2;
    for (int i = N - 1; i >= 0; i--) {
      if (j < 0)
	break;
      T[j] = S[i];
      j--;
    }
    if (T == "tea") {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
