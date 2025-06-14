#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 3 * 10e5))
    exit(1);
  vector<int> A(N);
  vector<vector<int>> S;
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < -1) || (a > N) || (a == 0))
      exit(1);
    bool breakflag = false;
    rep (j, S.size()) {
      if (S[j][0] == i + 1) {
	S[j].insert(S[j].begin(), a);
	breakflag = true;
	break;
      } else if (S[j][S[j].size() - 1] == a) {
	S[j].push_back(i + 1);
	breakflag = true;
	break;
      } 
    }
    if (! breakflag) {
      vector<int> s = {a, i + 1};
      S.push_back(s);
    }
  }
  /*
  rep (i, S.size()) {
    rep (j, S[i].size()) {
      cout << S[i][j] << ", ";
    }
    cout << endl;
  }
  */
  int num = -1;
  rep (i, S.size()) {
    if (S[i][0] == num) {
      for (int j = 1; j < S[i].size(); j++)
	cout << S[i][j] << " ";
      num = S[i][S[i].size() - 1];
      i = -1;
    }
  }
  cout << endl;
  return 0;
}
