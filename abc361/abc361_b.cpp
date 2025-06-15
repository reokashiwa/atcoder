#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int a, b, c, d, e, f, g, h, i, j, k, l;
  cin >> a >> b >> c >> d >> e >> f;
  cin >> g >> h >> i >> j >> k >> l;

  if ((a < 0) || (a > 1000))
    exit(1);
  if ((d < 0) || (d > 1000))
    exit(1);
  if (a >= d)
    exit(1);

  if ((b < 0) || (b > 1000))
    exit(1);
  if ((e < 0) || (e > 1000))
    exit(1);
  if (b >= e)
    exit(1);

  if ((c < 0) || (c > 1000))
    exit(1);
  if ((f < 0) || (f > 1000))
    exit(1);
  if (c >= f)
    exit(1);

  if ((g < 0) || (g > 1000))
    exit(1);
  if ((j < 0) || (j > 1000))
    exit(1);
  if (g >= j)
    exit(1);

  if ((h < 0) || (h > 1000))
    exit(1);
  if ((k < 0) || (k > 1000))
    exit(1);
  if (h >= k)
    exit(1);

  if ((i < 0) || (i > 1000))
    exit(1);
  if ((l < 0) || (l > 1000))
    exit(1);
  if (i >= l)
    exit(1);

  bool flag = true;
  if ((a >= j) && (d <= g))
    flag = false;
  if ((b >= k) && (e <= h))
    flag = false;
  if ((c >= l) && (f <= i))
    flag = false;
  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
