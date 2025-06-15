#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 100))
    exit(1);
  vector<int> P(N);
  rep(i, N) {
    int p;
    cin >> p;
    if ((p < 1) || (p > N))
      exit(1);
    rep (j, i) {
      if (P.at(j) == p)
	exit(1);
    }
    P.at(i) = p;
  }
  int check = 0;
  rep (i, N) {
    if (P.at(i) == i + 1)
      check++;
    else
      break;
  }
  if (check == N)
    exit(1);

  int index = 0;
  rep (i, N - 1) {
    int r = 1;
    rep (j, N - i - 1) {
      r = r * (j + 1);
    }
    // cout << r << endl;
    index = index + r * (P.at(i) - 1);
  }
  //cout << index << endl;

  index = index - 1;
  vector<int> Q(N);
  rep (i, N) {
    Q.at(i) = i;
  }
  /*
  rep (i, Q.size()) {
    cout << Q.at(i) << " ";
  }
  cout << endl;
  */
  rep (i, N - 1) {
    int r = 1;
    rep (j, N - i - 1) {
      r = r * (j + 1);
    }
    int q = index / r;
    // cout << q << endl;
    cout << Q.at(q) << " ";
    Q.erase(std::cbegin(Q) + q);
    /* rep (i, Q.size()) {
      cout << Q.at(i) << " ";
    }
    cout << endl;*/
    index = index - r * q;
  }
  cout << endl;
}
