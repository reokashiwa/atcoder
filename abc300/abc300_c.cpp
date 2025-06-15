#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;
  if ((H < 3) || (H > 100))
    exit(1);
  if ((W < 3) || (W > 100))
    exit(1);
  vector<string> C;

  rep (i, H) {
    string c;
    cin >> c;
    if (c.size() != W)
      exit(1);
    rep (j, W) {
      if ((c[j] != '.') && (c[j] != '#'))
	exit(1);
    }
  }
}
