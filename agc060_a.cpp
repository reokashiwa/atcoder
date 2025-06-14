#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 5000))
    exit(1);
  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);
  rep (i, N) {
    if ((S[i] != '?') && ((S[i] < 'a') || (S[i] > 'z')))
      exit(1);
  }

  vector<int> A(N, 26);
  rep (i, N) {
    if (S[i] != '?') {
      A[i] = 1;
      rep (j, 5) {
	if (j == 2)
	  continue;
	if ((i + 2 - j >= 0) && (i + 2- j < N)) {
	  if (S[i + 2 - j] == S[i]) {
	    cout << 0 << endl;
	    return 0;
	  } else if (S[i + 2 - j] == '?')
	    A[i + 2 - j]--;
	}
      }
    }
  }
  rep (i, N) {
    if (A[i] > 1) {
      rep (j, 3) {
	if (j == 0)
	  continue;
	if (A[i + j] > 1)
	  A[i + j]--;
      }
    }
  }

  unsigned long long p = 1;
  unsigned long long r = 1;
  bool pushback_flag = false;
  rep (i, N - 1) {
    if (p < 998244353) {
      p = p * A[i];
      pushback_flag = false;
    } else {
      r = (r * (p % 998244353)) % 998244353;
      pushback_flag = true;
      p = A[i];
    }
  }
  if (pushback_flag == false)
    r = (r * (p % 998244353)) % 998244353;
  
  cout << r << endl;
}
