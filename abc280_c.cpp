#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S, T;
  cin >> S >> T;

  if ((S.size() < 1) || (S.size() > 5 * 100000))
    exit(1);
  if (S.size() + 1 != T.size())
    exit(1);
  rep(i, S.size()) {
    if ((S.at(i) < 'a') || (S.at(i) > 'z'))
      exit(1);
  }

  bool add_flag = false;
  int num = 0;
  rep(i, S.size()) {
    if (add_flag) {
      if (S.at(i) != T.at(i + 1))
	exit(1);
    } else if (S.at(i) != T.at(i)) {
      if ((T.at(i) < 'a') || (T.at(i) > 'z'))
	exit(1);
      num = i;
      add_flag = true;
    }
  }
  if (add_flag)
    cout << num + 1 << endl;
  else {
    if ((T.at(T.size() - 1) < 'a') || (T.at(T.size() - 1) > 'z'))
      exit(1);
    else
      cout << S.size() + 1 << endl;
  }
}
