#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int A, B;
  cin >> A >> B;
  if ((A < 2) || (A > 9))
    exit(1);
  if ((B < 2) || (B > 9))
    exit(1);
  cout << (int) pow(A, B) + (int) pow(B, A) << endl;
}
