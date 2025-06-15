#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 52))
    exit(1);
  vector<string> S(N);
  rep(i, N) {
    string s;
    cin >> s;
    if (s.size() != 2)
      exit(1);
    /*
    if ((s.at(0) < '0') || (s.at(0) > 'Z'))
      exit(1);
    if ((s.at(1) < '0') || (s.at(1) > 'Z'))
      exit(1);
    */
    
    rep(j, i) {
      if (S.at(j) == s) {
	cout << "No" << endl;
	exit(0);
      }
    }
    S.at(i) = s;
  }
  
  string sa = "HDCS";
  string sb = "A23456789TJQK";
  rep(i, N) {
    char c0 = S.at(i).at(0);
    char c1 = S.at(i).at(1);
    bool flag = false;
    rep (j, sa.size()) {
      if (c0 == sa.at(j)) {
	flag = true;
	break;
      }
    }
    if (flag == false) {
      cout << "No" << endl;
      exit(0);
    }

    flag = false;
    rep (j, sb.size()) {
      if (c1 == sb.at(j)) {
	flag = true;
	break;
      }
    }
    if (flag == false) {
      cout << "No" << endl;
      exit(0);
    }
  }
  cout << "Yes" << endl;
  return 0;
}
