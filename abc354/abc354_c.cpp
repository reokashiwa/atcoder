#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 2 * 10e5))
    exit(1);
  vector<tuple<int, int, int, bool>> AC;
  
  rep (i, N) {
    int a, c;
    cin >> a >> c;
    if ((a < 1) || (a > 10e9))
      exit(1);
    if ((c < 1) || (c > 10e9))
      exit(1);
    /*
    rep (j, i) {
      if (get<0>(AC[j]) == a)
	exit(1);
      if (get<1>(AC[j]) == c)
	exit(1);
    }
    */
    AC.push_back(make_tuple(a, c, i + 1, true));
  }
  sort(AC.begin(), AC.end());
  /*
  rep (i, AC.size()) {
    int a, c, index;
    tie(a, c, index, ignore) = AC[i];
    cout << a << " " << c << " " << index << " " << endl;
  }
  */
  for (int i = N - 1; i > 0; i--) {
    if (! get<3>(AC[i]))
      continue;
    for (int j = i - 1; j >= 0; j--) {
      if (! get<3>(AC[j]))
	continue;
      if ((get<0>(AC[i]) > get<0>(AC[j])) &&
	  (get<1>(AC[i]) < get<1>(AC[j]))) {
	get<3>(AC[j]) = false;
      }
    }
  }
  vector<int> L;
  rep (i, N) {
    if (get<3>(AC[i]))
      L.push_back(get<2>(AC[i]));
  }
  int l = L.size();
  cout << l << endl;
  sort(L.begin(), L.end());
  rep (i, l - 1)
    cout << L[i] << " ";
  cout << L[l - 1] << endl;
  return 0;
}
