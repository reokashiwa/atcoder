#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);
  vector<vector<int>> H(26);
  rep (i, N) {
    if ((S[i] < 'a') || (S[i] > 'z'))
      exit(1);
    H[S[i] - 'a'].push_back(i);
  }
  /*
  rep (i, 26) {
    cout << char('a' + i) << ": ";
    if (H[i].size() > 0) {
      rep (j, H[i].size() - 1)
	cout << H[i][j] << ", ";
      cout << H[i][H[i].size() - 1] << endl;
    } else {
      cout << endl;
    }
  }
  */

  int Q;
  cin >> Q;
  if ((Q < 1) || (Q > 2 * 10e5))
    exit(1);
  vector<int> C(26);
  rep (i, 26)
    C[i] = i;
  rep (i, Q) {
    char c, d;
    cin >> c >> d;
    if ((c < 'a') || (c > 'z'))
      exit(1);
    if ((d < 'a') || (d > 'z'))
      exit(1);
    int c_num = c - 'a';
    int d_num = d - 'a';
    if (C[c_num] == c_num)
      C[c_num] = d_num;
    rep (j, 26) {
      if (C[j] == c_num)
	C[j] = d_num;
    }
  }
  string S_NEW(N, '0');
  rep (i, 26) {
    // cout << char('a' + i) << ": " << char('a' + C[i]) << endl;
    rep (j, H[i].size())
      S_NEW[H[i][j]] = char('a' + C[i]);
  }
  cout << S_NEW << endl;
  return 0;
}
