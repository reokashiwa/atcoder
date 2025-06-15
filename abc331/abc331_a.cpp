#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int M, D;
  cin >> M >> D;
  if ((M < 1) || (M > 99))
    exit(1);
  if ((D < 1) || (D > 99))
    exit(1);

  int y, m, d;
  cin >> y >> m >> d;
  if ((y < 1000) || (y > 9000))
    exit(1);
  if ((m < 1) || (m > 99))
    exit(1);
  if ((d < 1) || (d > 99))
    exit(1);
  if (m > M)
    exit(1);
  if (d > D)
    exit(1);

  if (d + 1 > D) {
    d = d + 1 - D;
    m++;
  } else
    d++;

  if (m > M) {
    m = m - M;
    y++;
  }
  
  cout << y << " " << m << " " << d << endl;
  return 0;
					   
}
