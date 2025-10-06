#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if ((a < 1) || (a > 10))
    exit(1);
  if ((b < 1) || (b > 10))
    exit(1);
  if ((c < 1) || (c > 10))
    exit(1);
  if ((a == b) || (a == c) || (b == c))
    cout << "Yes";
  else
    cout << "No";
  cout << endl;
}
