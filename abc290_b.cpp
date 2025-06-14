#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;
  rep (i, N) {
    if (S[i] == 'o') {
      if (K > 0) {
	cout << 'o';
	K--;
      } else
	cout << 'x';
    } else
      cout << 'x';
  }
  cout << endl;
}
