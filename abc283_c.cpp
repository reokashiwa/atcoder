#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;

  int ans = S.size();
  bool zero_flag = false;
  rep (i, S.size()) {
    if (S[i] == '0') {
      if (zero_flag == true) {
	ans--;
	zero_flag = false;
      } else
	zero_flag = true;
    } else
      zero_flag = false;
  }
  cout << ans << endl;
}
