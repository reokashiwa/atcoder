#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  string S;
  rep (i, N) {
    char c;
    long long l;
    cin >> c >> l;
    if ((c < 'a') || (c > 'z'))
      exit(1);
    if ((l < 1) || (l > 10e18))
      exit(1);
    if ((long long)S.size() + l > 100) {
      cout << "Too Long" << endl;
      return 0;
    }
    rep (j, l)
      S.push_back(c);
  }
  cout << S << endl;
}
