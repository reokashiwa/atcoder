#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int S, A, B, X;
  cin >> S >> A >> B >> X;
  if ((S < 1) || (S > 15))
    exit(1);
  if ((A < 1) || (A > 1000))
    exit(1);
  if ((B < 1) || (B > 1000))
    exit(1);
  if ((X < 1) || (X > 1000))
    exit(1);

  int l = 0;
  l = l + X / (A + B) * A * S;
  if (X % (A + B) < A)
    l = l + (X % (A + B)) * S;
  else
    l = l + A * S;
  cout << l << endl;
  
}
