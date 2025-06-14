#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S, T;
  cin >> S >> T;
  if ((S.size() < 1) || (S.size() > 2 * 10e5))
    exit(1);
  if ((T.size() < 1) || (T.size() > 2 * 10e5))
    exit(1);
  
  if (S.size() != T.size())
    exit(1);

  int satnum = 0, tatnum = 0;
  rep (i, S.size()) {
    if (((S[i] < 'a') || (S[i] > 'z')) && (S[i] != '@'))
      exit(1);
    if (S[i] == '@')
      satnum++;
  }
  rep (i, T.size()) {
    if (((T[i] < 'a') || (T[i] > 'z')) && (T[i] != '@'))
      exit(1);
    if (T[i] == '@')
      tatnum++;
  }

  sort(S.begin(), S.end());
  sort(T.begin(), T.end());

  // cout << S << endl;
  // cout << T << endl;

  int s = satnum, t = tatnum;
  int d = satnum + tatnum;
  while ((s < S.size()) && (t < T.size())) {
    if (S[s] == T[t]) {
      s++;
      t++;
    } else if (S[s] < T[t]) {
      if ((S[s] == 'a') || (S[s] == 't') || (S[s] == 'c') ||
	  (S[s] == 'o') || (S[s] == 'd') || (S[s] == 'e') ||
	  (S[s] == 'r')) {
	s++;
	d--;
      } else {
	cout << "No" << endl;
	return 0;
      }
    } else if (S[s] > T[t]) {
      if ((T[t] == 'a') || (T[t] == 't') || (T[t] == 'c') ||
	  (T[t] == 'o') || (T[t] == 'd') || (T[t] == 'e') ||
	  (T[t] == 'r')) {
	t++;	
	d--;
      } else {
	cout << "No" << endl;
	return 0;
      }
    }
    if (d < 0) {
      cout << "No" << endl;
      return 0;
    }
  }
  if (S.size() - 1 - s + T.size() - t + d <= satnum + tatnum)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  
}

