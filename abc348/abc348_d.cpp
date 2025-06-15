#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;
  if ((H < 1) || (H > 200))
    exit(1);
  if ((W < 1) || (W > 200))
    exit(1);
  vector<string> HW;
  int s_num = 0, t_num =0;
  rep (i, H) {
    string s;
    cin >> s;
    if (s.size() != W)
      exit(1);
    rep (j, s.size()) {
      if ((s[j] != '.') && (s[j] != '#') && (s[j] != 'S') && (s[j] != 'T'))
	exit(1);
      if (s[j] == 'S')
	s_num ++;
      else if (s[j] == 'T')
	t_num ++;
    }
    HW.push_back(s);
  }
  int N;
  cin >> N;
  if ((N < 1) || (N > 300))
    exit(1);
  vector<tuple<int, int, int>> RCE;
  rep (i, N) {
    int r, c, e;
    cin >> r >> c >> e;
    if ((r < 1) || (r > H))
      exit(1);
    if ((c < 1) || (c > W))
      exit(1);
    tuple<int, int, int> rce(r, c, e);
    rep (j, i) {
      if ((r == get<0>(RCE[j])) && (c == get<1>(RCE[j])))
	exit(1);
    }
    RCE.push_back(rce);
  }
}
