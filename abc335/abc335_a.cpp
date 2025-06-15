#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  int s = S.size();
  if ((s < 4) || (s > 100))
    exit(1);
  S[s - 1] = '4';
  cout << S << endl;
}
