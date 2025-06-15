#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 2) || (N > 1e5))
    exit(1);
  if ((M < 1) || (M > 1e5))
    exit(1);

  vector<int> A(M);
  vector<int> B(M);
  rep(i, M) {
    int a, b;
    cin >> a >> b;
    if ((a < 1) || (a > N))
      exit(1);
    if ((b < 1) || (b > N))
      exit(1);
    if (a > b)
      exit(1);
    rep(j, i) {
      if ((A.at(i) == A.at(j)) && (B.at(i) == B.at(j)))
	exit(1);
      if ((A.at(i) == B.at(j)) && (B.at(i) == A.at(j)))
	exit(1);
    }
    A.at(i) = a;
    B.at(i) = b;
  }

  vector<vector<int>> D(N);
  rep (i, M) {
    D.at(A.at(i) - 1).push_back(B.at(i));
    D.at(B.at(i) - 1).push_back(A.at(i));
  }

  rep (i, N) {
    int s;
    s = D.at(i).size();
    cout << s << " ";
    if (s > 0) {
      sort(D.at(i).begin(), D.at(i).end());
      rep (j, s) {
	cout << D.at(i).at(j) << " ";
      }
      cout << endl;
    } else
      cout << endl;
  }
}
