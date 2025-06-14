#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 2 * 10e5))
    exit(1);

  int ans = 0;
  for (int X = 1; X < N; X++) {
    int x = 0, y = 0;
    for (int i = 1; i * i <= X; i++) {
      if (X % i == 0) {
	x++;
	if (X != i * i)
	  x++;
      }

    }
    int Y = N - X;
    for (int j = 1; j * j <= Y; j++) {
      if (Y % j == 0) {
	y++;
	if (Y != j * j)
	  y++;
      }
    }
    ans += x * y;
  }
  cout << ans << endl;
    
}
