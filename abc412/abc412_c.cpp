#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int calc() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 2 * 10e5))
    exit(1);
  vector<int> S(N - 2);
  int first = 0, last = 0;
  rep (j, N) {
    int s;
    cin >> s;
    if ((s < 1) || (s > 10e9))
      exit(1);
    if (j == 0)
      first = s;
    else if (j == N - 1)
      last = s;
    else
      S[j - 1] = s;
  }
  sort(S.begin(), S.end());
  int now = first;
  int count = 2;
  int j = 0;
  while (j < N - 2) {
    if (S[j] > 2 * now) {
      if (j > 0) {
	now = S[j - 1];
	j--;
	count++;
      } else {
	cout << -1 << endl;
	return 0;
      }
      continue;
    }
    if (S[j] * 2 > last) {
      if (S[j] != now) count++;
      cout << count << endl;
      return 0;
    }
    j++;
  }
  cout << -1 << endl;
  return 0;
}

int main() {
  int T;
  cin >> T;
  if ((T < 1) || (T > 10e5))
    exit(1);
  rep (i, T) {
    calc();
  }
}

