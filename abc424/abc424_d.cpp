#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int T;
  cin >> T;
  if ((T < 1) || (T > 100))
    exit(1);
  rep (i, T) {
    int h, w;
    cin >> h >> w;
    if ((h < 2) || (h > 7))
      exit(1);
    if ((w < 2) || (w > 7))
      exit(1);
    vector<string> S(h);
    rep (j, h) {
      string s;
      cin >> s;
      if (s.size() != w)
	exit(1);
      S.push_back(s);
    }
    vector<vector<bool>> M(h - 1, vector<bool>(w - 1, false));
    rep (j, h - 1) {
      rep (k, w - 1) {
	if ((S[j][k] == '.') || (S[j + 1][k] == '.') ||
	    (S[j][k + 1] == '.') || (S[j + 1][k + 1] == '.'))
	  M[j][k] = true;
      }
    }
    vector<vector<int>> MM(h - 2, vector<int>(w - 2, 4));
    rep (j, h - 2) {
      rep (k, w - 2) {
	if (M[j][k] == true)
	  MM[j][k]--;
	if (M[j][k + 1] == true)
	  MM[j][k]--;
	if (M[j + 1][k] == true)
	  MM[j][k]--;
	if (M[j + 1][k + 1] == true)
	  MM[j][k]--;
      }
    }
    int max = 0, max_h = 0, max_w = 0;
    rep (j, h - 2) {
      rep (k, w - 2) {
	if (MM[j][k] > max) {
	  max = MM[j][k];
	  max_h = j;
	  max_w = w;
	}
      }
    }
    if (max == 0) break;
    else {
      
    }
    
  }
}
/*
####.
##.##
#####
.####
##.#.
0111
0110
1000
1111

201
223
122

+1

0111
0111
1011
1111

200
210
110

+1

1111
1111
1011
1111

000
110
110

+1

1111
1111
1111
1111
*/
