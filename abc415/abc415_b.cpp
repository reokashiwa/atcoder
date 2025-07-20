#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  if ((S.size() < 2) || (S.size() > 1000))
    exit(1);
  bool flag = false;
  rep (i, S.size()){
    if ((S[i] != '.') && (S[i] != '#'))
      exit(1);
    if (S[i] == '.')
      continue;
    else {
      cout << i + 1;
      if (flag) {
	cout << endl;
	flag = false;
      } else {
	cout << ", ";
	flag = true;
      }
    }
  }
}
