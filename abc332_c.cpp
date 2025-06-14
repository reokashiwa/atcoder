#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 1) || (N > 1000))
    exit(1);
  if ((M < 1) || (M > 1000))
    exit(1);
  if (M > N)
    exit(1);
  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);
  int muji = 0, logo = 0, logomax = 0;
  rep (i, N) {
    if (S[i] == '0') {
      muji = 0;
      logo = 0;
    } else if (S[i] == '1') {
      if (muji + 1 > M)
	logo++;
      else
	muji++;
    } else if (S[i] == '2') {
      logo++;
    }
    if (logo > logomax)
      logomax = logo;
  }
  cout << logomax << endl;

  return 0;
}
