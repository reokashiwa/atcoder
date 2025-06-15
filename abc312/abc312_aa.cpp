#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  if (S.size() != 3)
    exit(1);
  rep (i, 3) {
    if ((S[i] < 'A') || (S[i] > 'Z'))
      exit(1);
  }
  rep (i, 7) {
    char first_c = 'A' + i;
    char second_c = 'A' + (2 + i) % 7;
    char third_c = 'A' + (4 + i) % 7;
    // cout << first_c << second_c << third_c << endl;
    char cary[] = {first_c, second_c, third_c};
    string str(cary, 3);
    if (S == str) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
