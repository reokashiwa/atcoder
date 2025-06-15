#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int64_t sx, sy;
  cin >> sx >> sy;
  if ((sx < 0) || (sx > 2 * 10e16))
    exit(1);
  if ((sy < 0) || (sy > 2 * 10e16))
    exit(1);
  
  int64_t tx, ty;
  cin >> tx >> ty;
  if ((tx < 0) || (tx > 2 * 10e16))
    exit(1);
  if ((ty < 0) || (ty > 2 * 10e16))
    exit(1);

  int64_t dx = abs(tx - sx), dy = abs (ty - sy);
  if (dy > dx) {
    dx = 0;
  } else {
    dx = dx - dy;
    if (dx % 2 == 0)
      dx = dx / 2;
    else if (dx < 2)
      if (ty % 2 == 0)
	if (sx % 2 == 0)
	  dx = 0;
	else
	  dx = 1;
      else
	if (sx % 2 == 0)
	  dx = 1;
	else
	  dx = 0;
    else
      dx = dx / 2 + 1;
  }
  cout << dx + dy << endl;
}
