#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  if ((S.size() < 1) || (S.size() > 100))
    exit(1);
  rep (i, S.size()) {
    if ((S[i] < 'a') || (S[i] > 'z'))
      exit(1);
  }
  long double maxj = 0.0;
  rep (i, S.size() - 2) {
    for (int j = i + 2; j < S.size(); j++) {
      if ((S[i] == S[j]) && (S[i] == 't')) {
	int x = 2;
	for (int k = i + 1; k < j; k++) {
	  if (S[k] == S[i])
	    x++;
	}
	int t = j - i + 1;
	long double juten = ((long double) (x - 2)) / ((long double) (t - 2));
	if (maxj < juten) maxj = juten;
	/*
	if (maxj == juten) {
	  cout << i << " " << j << " " << x << " ";
	  cout << maxj << endl;
	}
	*/
      }
    }
  }
  cout << fixed << setprecision(10) << maxj << endl;
}
