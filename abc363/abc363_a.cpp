#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int R;
  cin >> R;
  if ((R < 1) || (R > 299))
    exit(1);
  int r = R % 100;
  cout << 100 - r << endl;
}
