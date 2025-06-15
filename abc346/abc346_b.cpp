#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int W, B;
  cin >> W >> B;
  if ((W < 0) || (W > 100))
    exit(1);
  if ((B < 0) || (B > 100))
    exit(1);
  if (W + B < 1)
    exit(1);

  string S = "wbwbwwbwbwbw";
  rep (i, 5)
    S = S + S;

  rep (i, S.size() - W - B) {
    int w = 0, b = 0;
    rep (j, W + B) {
      if (S[i + j] == 'w')
	w++;
      if (S[i + j] == 'b')
	b++;
    }
    if ((w == W) && (b == B)) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
