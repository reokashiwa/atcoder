#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int K;
  cin >> K;
  if ((K < 1) || (K > 26))
    exit(1);

  rep(i, K) {
    printf("%c", 'A' + i);
  }
  cout << endl;

  return 0;
}
