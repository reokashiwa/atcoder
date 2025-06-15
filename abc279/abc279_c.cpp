#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;
  if ((H < 1) || (H > 4e5))
    exit(1);
  if ((W < 1) || (W > 4e5))
    exit(1);

  vector<string> S(H);
  vector<string> T(H);

  rep(i, H) {
    string s;
    cin >> s;
    if (s.size() != W)
      exit(1);
    rep(j, W) {
      if ((s.at(j) != '#') && (s.at(j) != '.'))
	exit(1);
    }
    S.at(i) = s;
  }

  rep(i, H) {
    string t;
    cin >> t;
    if (t.size() != W)
      exit(1);
    rep(j, W) {
      if ((t.at(j) != '#') && (t.at(j) != '.'))
	exit(1);
    }
    T.at(i) = t;
  }

  vector<string> T_S(W);
  vector<string> T_T(W);

  rep(i, W) {
    rep(j, H) {
      T_S.at(i).push_back(S.at(j).at(i));
      T_T.at(i).push_back(T.at(j).at(i));
    }
  }

  sort(T_S.begin(), T_S.end());
  sort(T_T.begin(), T_T.end());

  if (T_S == T_T)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
  
  // vector<int> t;

  // rep(i, W) {
  //   rep(j, W) {
  //     if (T_S.at(i) == T_T.at(j)) {
  // 	bool cont_flag = false;
  // 	rep(k, t.size()) {
  // 	  if (t.at(k) == j) {
  // 	    cont_flag = true;
  // 	    break;
  // 	  }
  // 	}
  // 	if (cont_flag == true)
  // 	  continue;
	
  // 	t.push_back(j);
  // 	break;
  //     }
  //   }

  //   if (i != t.size() - 1) {
  //     cout << "No" << endl;
  //     return 0;
  //   }
  // }
  // cout << "Yes" << endl;
  // return 0;
}
