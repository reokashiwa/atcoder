#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 100))
    exit(1);
  vector<bool> L(N);
  rep (i, N) {
    int l;
    cin >> l;
    if ((l != 0) && (l != 1))
      exit(1);
    if (l == 0)
      L[i] = false;
    else
      L[i] = true;
  }
  vector<bool> one(N + 1);
  vector<bool> two(N + 1);
  one[0] = true;
  two[N] = true;
  for (int i = 0; i < N; i++) {
    if (L[i] == false) {
      one[i + 1] = true;
      continue;
    } else {
      for (int j = i + 1; j < N + 1; j++)
	one[j] = false;
      break;
    }
  }
  /*
  cout << "one: ";
  rep (i, N + 1)
    if (one[i]) cout << i << ", ";
  cout << endl;
  */
  for (int i = N - 1; i >= 0; i--) {
    if (L[i] == false) {
      two[i] = true;
      continue;
    } else {
      for (int j = i - 1; j >= 0; j--)
	two[j] = false;
      break;
    }
  }
  /*
  cout << "two: ";
  rep (i, N + 1)
    if (two[i]) cout << i << ", ";
  cout << endl;
  */
  int count = 0;
  rep (i, N + 1) {
    if (! (one[i] || two[i])) {
      count++;
      // cout << i << " ";
    }
  }
  // cout << endl;
  cout << count << endl;
}
