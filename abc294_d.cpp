#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 5 * 10e5))
    exit(1);
  int Q;
  cin >> Q;
  if ((Q < 2) || (Q > 5 * 10e5))
    exit(1);
  vector<bool> called(N, false);
  vector<bool> go(N, false);

  int min_called = -1;
  int min_go = -1;
  rep(i, Q) {
    int event_number;
    cin >> event_number;
    switch (event_number) {
    case 1:
      for (int j = min_called + 1; j < N; j++) {
	// rep(j, N) {
	if (! called[j]) {
	  min_called = j;
	  called[j] = true;
	  break;
	}
      }
      break;

    case 2:
      int x;
      cin >> x;
      if ((x < 1) || (x > 5 * 10e5))
	exit(1);
      go[x - 1] = true;
      min_go = x - 1;
      break;

    case 3:
      //rep(j, N) {
      for (int j = min_go + 1; j < N; j++) {
	if (called[j] && (! go[j])) {
	  // cout << called[j] << ", " << go[j] << ": ";
	  cout << j + 1 << endl;
	  break;
	}
      }
      break;

    default:
      exit(1);
      break;
    }
  }
}
