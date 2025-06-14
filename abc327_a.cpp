#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  string S;
  cin >> N >> S;
  if ((N < 2) || (N > 100))
    exit(1);
  if (S.size() != N)
    exit(1);
  bool aflag = false, bflag = false;
  rep (i, N) {
    if (aflag && S[i] == 'b') {
      cout << "Yes" << endl;
      return 0;
    }

    if (bflag && S[i] == 'a') {
      cout << "Yes" << endl;
      return 0;
    }
    
    if (S[i] == 'a')
      aflag = true;
    else
      aflag = false;
    
    if (S[i] == 'b')
      bflag = true;
    else
      bflag = false;

  }
  cout << "No" << endl;
  return 0;
  
}
