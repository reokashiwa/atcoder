#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);

  bool flag = false;
  rep(i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > 100))
      exit(1);
    if (a % 2 == 0) {
      if (flag)
	cout << " ";
      flag = true;
      cout << a;
    }
  }
  cout << endl;
}
