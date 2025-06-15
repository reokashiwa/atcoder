#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  int s = S.size();
  if ((s < 3) || (s > 100))
    exit(1);

  int first_index = -1, second_index = -1;
  if (S[0] == S[1]) {
    for (int i = 2; i < s; i++) {
      if (S[i] != S[0]) {
	cout << i + 1 << endl;
	return 0;
      }
    }
  } else if (S[0] == S[2]) {
    cout << 2 << endl;
    return 0;
  } else {
    cout << 1 << endl;
  }
  return 0;
}
