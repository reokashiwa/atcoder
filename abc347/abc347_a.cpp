#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, K;
  cin >> N >> K;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((K < 1) || (K > 100))
    exit(1);
  int pa = 0;
  vector<int> AK;
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > 100))
      exit(1);
    if (a <= pa)
      exit(1);
    if (a % K == 0)
      AK.push_back(a / K);
    pa = a;
  }
  if (AK.size() > 0) {
    sort(AK.begin(), AK.end());
    rep (i, AK.size() - 1) {
      cout << AK[i] << " ";
    }
    cout << AK[AK.size() - 1] << endl;
  }
  return 0;
}
