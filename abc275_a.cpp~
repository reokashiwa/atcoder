#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if ((A < 1) || (A > 10))
    exit(1);
  if ((B < 0) || (B > A))
    exit(1);

  double S;
  S = 10000 * B / A;
  // cout << S << endl;
  vector<int> T;
  int d = 3;
  while (d > 0) {
    // cout << (int) (S / pow(10, d)) << endl;
    T.push_back((int) (S / pow(10, d)));
    // cout << T.at(3 - d) << endl;
    S = S - T.at(3 - d) * (int) pow(10, d);
    // cout << S << endl;
    d--;
  }

  if (T.at(3) >= 5)
    T.at(2) = T.at(2) + 1;

  S = 0.0;
  S = (T.at(0) * 100 + T.at(1) * 10 + T.at(2)) / 1000.0;
  printf("%.3f", S);

}
