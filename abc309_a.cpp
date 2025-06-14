#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int A, B;
  cin >> A >> B;
  if ((A < 1) || (A > 9))
    exit(1);
  if ((B < 1) || (B > 9))
    exit(1);
  if (((A - 1) / 3 == (B - 1) / 3) && ((A - B == 1) || (A - B == -1)))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
