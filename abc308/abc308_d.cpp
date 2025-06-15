#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;
  if ((H < 2) || (H > 500))
    exit(1);
  if ((W < 2) || (W > 500))
    exit(1);
  vector<string> S;
  rep (i, H) {
    string s;
    cin >> s;
    if (s.size() != W)
      exit(1);
    S[i] = s;
  }
}
