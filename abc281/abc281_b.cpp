#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  rep (i, S.size()) {
    if (((S.at(i) < 'A') || (S.at(i) > 'Z')) && ((S.at(i) < '0') || (S.at(i) > '9')))
    exit(1);
  }
  if ((S.size() < 1) || (S.size() > 10))
    exit(1);

  if (S.size() != 8) {
    cout << "No" << endl;
    return 0;
  }
  
  if ((S.at(0) >= 'A') && (S.at(0) <= 'Z')) {
    if ((S.at(S.size() - 1) >= 'A') && (S.at(S.size() - 1) <= 'Z')) {
      int sum = 0;
      for (int i = 1; i < (int) S.size() - 1; i++) {
	sum = sum + ((int) S.at(i) - 48) * pow (10, (int) S.size() - 2 - i);
      }
      if ((sum < 100000) || (sum > 999999)) {
	cout << "No" << endl;
	return 0;
      } else {
	cout << "Yes" << endl;
	return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;

}
