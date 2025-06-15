#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S, T;
  cin >> S >> T;
  size_t s = S.size(), t = T.size();
  if ((s < 1) || (s > 100))
    exit(1);
  if ((t < 1) || (t > 100))
    exit(1);
  if (t > s)
    exit(1);

  for (int w = 1; w < s; w++) {
    int sw = s / w;
    if (((sw == t) && (s % w == 0)) || ((sw == t - 1) && (s % w != 0)) ||
	((sw == t) && (s % w != 0))) {
      rep(c, w) {
	string P;
	int j = 0;
	while (true) {
	  P.push_back(S[c + j * w]);
	  j++;
	  if (c + j * w >= s)
	    break;
	}
	if (P == T) {
	  cout << "Yes" << endl;
	  return 0;
	}
      }
    } else if (sw < t)
      break;
  }
  cout << "No" << endl;
}
