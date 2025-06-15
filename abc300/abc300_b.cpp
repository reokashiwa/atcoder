#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;
  if ((H < 2) || (H > 30))
    exit(1);
  if ((W < 2) || (W > 30))
    exit(1);
  vector<string> A(H);
  vector<string> B(H);

  rep (i, H) {
    string s;
    cin >> s;
    if (s.size() != W)
      exit(1);
    rep (j, W) {
      if ((s[j] != '#') && (s[j] != '.'))
	exit(1);
    }
    A[i] = s;
  }
  rep (i, H) {
    string s;
    cin >> s;
    if (s.size() != W)
      exit(1);
    rep (j, W) {
      if ((s[j] != '#') && (s[j] != '.'))
	exit(1);
    }
    B[i] = s;
  }
  vector<vector<int>> MP;
  rep (i, H) {
    rep (j, W) {
      if (B[i][j] == A[0][0]) {
	vector<int> mp;
	mp = {i, j};
	MP.push_back(mp);
      }
    }
  }
  /*
  rep (i, MP.size()) {
    cout << "(" << MP[i][0] << ", " << MP[i][1] << ")" << endl;
  }
  */
  
  bool flag;  
  rep (k, MP.size()) {
    flag = true;    
    rep (i, H) {
      int bi = (i + MP[k][0]) % H;
      rep (j, W) {
	int bj = (j + MP[k][1]) % W;
	if (A[i][j] != B[bi][bj]) {
	  //cout << "MP=(" << MP[k][0] << ", " << MP[k][1] << ")" << endl;
	  //cout << "A[" << i << "][" << j << "] != B[" << bi << "][" << bj << "]" << endl;
	  flag = false;
	  break;
	}
      }
    }
    if (flag) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
