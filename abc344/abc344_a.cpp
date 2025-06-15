#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  int s = S.size();
  if ((s < 2) || (s > 100))
    exit(1);
  int p = 0;
  rep (i, s) {
    if ((S[i] != '|') && ((S[i] < 'a') || (S[i] > 'z')))
      exit(1);
    if (S[i] == '|')
      p++;
  }
  if (p != 2)
    exit(1);
  bool flag = true;
  rep (i, s) {
    if (flag && (S[i] != '|'))
      cout << S[i];
    if (S[i] == '|') {
      if (flag == true)
	flag = false;
      else
	flag = true;
    }
  }
  cout << endl;
  return 0;
}
