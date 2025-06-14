#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  if ((n < 1) || (n > 2 * 10e5))
    exit(1);

  srand(time(NULL));
 
  rep (i, n) {
    char c = 'a' + rand() % 26;
    cout << c;
  }
  cout << endl;
  return 0;
}
