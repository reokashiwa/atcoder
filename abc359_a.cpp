#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  int i = 0;
  rep (j, N) {
    string s;
    cin >> s;
    if ((s != "Takahashi") && (s != "Aoki"))
      exit(1);
    if (s == "Takahashi")
      i++;
  }
  cout << i << endl;
}
