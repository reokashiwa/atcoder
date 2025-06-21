#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string P;
  cin >> P;
  if ((P.size() < 1) || (P.size() > 100))
    exit(1);
  rep(i, P.size()) {
    if ((P[i] < 'a') || (P[i] > 'z'))
      exit(1);
  }
  int L;
  cin >> L;
  if ((L < 1) || (L > 100))
    exit(1);
  if (P.size() >= L)
    cout << "Yes";
  else
    cout << "No";
  cout << endl;
}
