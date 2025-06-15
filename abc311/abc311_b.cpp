#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, D;
  cin >> N >> D;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((D < 1) || (D > 100))
    exit(1);
  vector<bool> V(D, true);
  rep (i, N) {
    string S;
    cin >> S;
    if ((S.size() != D))
      exit(1);
    rep (j, D) {
      if ((S[j] == 'x') && V[j])
	V[j] = false;
    }
  }

  /*
  rep (i, D) {
    if (V[i])
      cout << 'o';
    else
      cout << 'x';
  }
  cout << endl;
  */
  
  int max = 0;
  int count = 0;
  bool flag = false;
  rep (i, D) {
    //    cout << i << ", ";
    if (V[i]) {
      if (! flag)
	flag = true;
      if (flag)
	count ++;
      //cout << count << endl;
    } else {
      if (flag) {
	flag = false;
	if (count > max)
	  max = count;
	count = 0;
      }
    }
  }
  if (count > max)
    max = count;
  cout << max << endl;
}
