#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 10))
    exit(1);
  vector<long long int> S;
  rep(i, N) {
    int s;
    cin >> s;
    if ((s < -1e9) || (s > 1e9))
      exit(1);
    S.push_back(s);
  }
  vector<long long int> A;
  rep(i, N) {
    if (i == 0)
      A.push_back(S.at(i));
    else {
      A.push_back(S.at(i) - S.at(i - 1));
    }
  }
  rep(i, N) {
    cout << A.at(i) << " ";
  }
  cout << endl;
}
