#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;
  if ((H < 2) || (H > 2000))
    exit(1);
  if ((W < 2) || (W > 2000))
    exit(1);
  vector<string> C(H);
  rep (i, H) {
    string s;
    cin >> s;
    if (s.size() != W)
      exit(1);
    rep (i, W) {
      if ((s[i] < 'a') || (s[i] > 'z'))
	exit(1);
    }
    C[i] = s;
  }
  bool step1 = true;
  bool step2 = true;
  while (step1 || step2) {
    vector<string> CP(H);
    rep (i, H) {
      CP[H]= C[i].copy
    }
    rep (i, H) {
      char c = '.';
      bool flag = false;
      bool unite = true;
      rep (j, W) {
	if (C[i][j] == '.')
	  continue;
	else if (! flag) {
	  c = C[i][j];
	  flag = true;
	} else if (c != C[i][j]) {
	  unite = false;
	  break;
	}
      }
      if (flag && unite) {
	rep (j, W) {
	  if (C[i][j] == c)
	    C[i][j] = '.';
	}
	step1 = true;
      } else
	step1 = false;
    }

    rep (j, W) {
      char c = '.';
      bool flag = false;
      bool unite = true;
      rep (i, H) {
	if (C[i][j] == '.')
	  continue;
	else if (! flag) {
	  c = C[i][j];
	  flag = true;
	} else if (c != C[i][j]) {
	  unite = false;
	  break;
	}
      }
      if (flag && unite) {
	rep (i, H) {
	  if (C[i][j] == c)
	    C[i][j] = '.';
	}
	step2 = true;
      } else
	step2 = false;
    }
  }
  int count = 0;
  rep (i, H) {
    rep (j, W) {
      if (C[i][j] != '.')
	count++;
    }
  }
  cout << count << endl;
}
