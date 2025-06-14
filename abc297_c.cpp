#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;
  if ((H < 1) || (H > 100))
    exit(1);
  if ((W < 2) || (W > 100))
    exit(1);

  vector<string> S(H);
  rep (i, H) {
    string s;
    cin >> s;
    if (s.size() != W)
      exit(1);
    rep (j, W) {
      if ((s[j] != '.') && (s[j] != 'T'))
	exit(1);
    }
    S[i] = s;
  }

  rep (i, H) {
    int l = -1, r = -1;
    bool flag = false;
    rep (j, W) {
      if (S[i][j] == 'T') {
	flag = true;
	if (l == -1)
	  l = j;
	if (j == W - 1) {
	  r = j;
	  if (r - l > 0) {
	    for (int k = l; k < r; k = k + 2) {
	      S[i][k] = 'P';
	      S[i][k + 1] = 'C';
	    }
	  }
	}
      } else {
	if (flag == true) {
	  flag = false;
	  r = j - 1;
	  if (r - l > 0) {
	    for (int k = l; k < r; k = k + 2) {
	      S[i][k] = 'P';
	      S[i][k + 1] = 'C';
	    }
	  }
	  l = -1;
	  r = -1;
	}
      }
    }
    cout << S[i] << endl;
  }
}
