#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  unsigned long long L, R;
  cin >> L >> R;
  if ((L < 0) || (L > pow(2, 60)))
    exit(1);
  if ((R < 0) || (R > pow(2, 60)))
    exit(1);
  if (L >= R)
    exit(1);
  if (L > 1) {
    unsigned long long l = L;
    map<int, int> P;
    int p = 2;
    while (true) {
      if (l % p == 0) {
	l = l / p;
	if (P.count(p))
	  P[p]++;
	else
	  P[p] = 1;
      } else
	p++;
      if (l == 1)
	break;
    }
    for (auto p : P)
      cout << p.first << ": " << p.second << endl;

  }
  
}
