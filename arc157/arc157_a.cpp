#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool rec_check(vector<int> num, string S) {
  vector<string> cs = {"XX", "XY", "YX", "YY"};
  vector<int> abcd = {num[1], num[2], num[3], num[4]};
  if (S.size() == num[0]) {
    // cout << S << endl;
    rep (i, S.size() - 1) {
      rep (j, cs.size()) {
	if ((S[i] == cs[j][0]) && (S[i + 1] == cs[j][1])) {
	  abcd[j]--;
	  if (abcd[j] < 0)
	    return false;
	  break;
	}
      }
    }
    // cout << S << endl;
    return true;
  } else {
    rep (i, cs.size()) {
      if (S[S.size() - 1] == cs[i][0]) {
	S.push_back(cs[i][1]);
	// cout << S << endl;
	if (rec_check(num, S)) {
	  return true;
	} else {
	  S.pop_back();
	}
      }
    }
  }
  return false;
}

int main() {
  vector<int> num;
  rep (i, 5) {
    int n;
    cin >> n;
    num.push_back(n);
  }
  if ((num[0] < 1) || (num[0] > 2 * 10e5))
    exit(1);
  rep (i, 4) {
    if (num[i + 1] < 0)
      exit(1);
  }
  if (num[1] + num[2] + num[3] + num[4] != num[0] - 1)
    exit(1);

  string S;
  vector<string> cs = {"XX", "XY", "YX", "YY"};
  rep (i, cs.size()) {
    S = cs[i];
    // cout << S << endl;
    if (rec_check(num, S)) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
