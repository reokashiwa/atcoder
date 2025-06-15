#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long llpow(int a, int b) {
  long long result;
  result = (long long) 1;
  rep(i, b) {
    result = result * (long long) a;
  }
  return result;
}

int main() {
  string S;
  cin >> S;

  rep(i, S.size()) {
    if ((S[i] < 'A') || (S[i] > 'Z'))
      exit(1);
  }

  long long result = 0;
  rep(i, S.size()) {
    int digits = S.size() - i - 1;
    int number = (int) S[i] - (int) 'A' + 1;
    result = result + llpow(26, digits) * number;
  }
  cout << result;
}
