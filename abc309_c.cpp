#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, K;
  cin >> N >> K;
  long long total = 0;
  if ((N < 1) || (N > 3 * 10e5))
    exit(1);
  if ((K < 0) || (K > 10e9))
    exit(1);
  vector<pair<int, int>> AB(N);
  rep (i, N) {
    int a, b;
    cin >> a >> b;
    if ((a < 1) || (a > 10e9))
      exit(1);
    if ((b < 1) || (b > 10e9))
      exit(1);
    AB[i] = make_pair(a * (-1), b);
    total = total + (long) b;
  }
  sort(AB.begin(), AB.end());
  /*
  rep (i, N) {
    cout << AB[i].first << ", " << AB[i].second << endl;
  }
  */
  long long sum = 0;
  if (total <= K) {
    cout << 1 << endl;
    return 0;
  } else {
    rep (i, N) {
      sum = sum + (long) AB[i].second;                
      if (sum > K) {
	cout << AB[i].first * (-1) + 1 << endl;
	return 0;
      }
    }
  }
}
