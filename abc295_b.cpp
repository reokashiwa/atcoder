#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int R, C;
  cin >> R >> C;

  vector<string> map(R);
  vector<string> map_after(R);
  rep (i, R) {
    string s;
    cin >> s;
    map[i] = s;
    string after_s;
    rep (j, s.size()) {
      if (s[j] == '#')
	after_s.push_back('#');
      else
	after_s.push_back('.');
    }
    map_after[i] = after_s;
  }

  rep (i, R) {
    rep (j, C) {
      if ((map[i][j] >= '1') && (map[i][j] <= '9')) {
	int power = map[i][j] - '0';
	int ll, rl, tl, bl;
	if (j - power > 0)
	  ll = j - power;
	else
	  ll = 0;
	if (j + power < C - 1)
	  rl = j + power;
	else
	  rl = C - 1;
	if (i - power > 0)
	  tl = i - power;
	else
	  tl = 0;
	if (i + power < R - 1)
	  bl = i + power;
	else
	  bl = R - 1;

	for (int k = tl; k <= bl; k++) {
	  for (int l = ll; l <= rl; l++) {
	    int dist = 0;	    
	    if (k - i > 0)
	      dist = dist + k - i;
	    else
	      dist = dist - k + i;
	    if (l - j > 0)
	      dist = dist + l - j;
	    else
	      dist = dist - l + j;
	    if (dist <= power)
	      map_after[k][l] = '.';
	  }
	}
      }
    }
  }

  rep (i, R) {
    cout << map_after[i] << endl;
  }
}
