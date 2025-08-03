#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  vector<int> A(N);
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > 2 * 10e5))
      exit(1);
    A[i] = a;
  }
  map<int, int> counter;
  for (int i = 1; i < N; i++) {
    if (i - A[i] > 0) {
      if (counter.count(i - A[i]))
	counter[i - A[i]]++;
      else
	counter[i - A[i]] = 1;
    }
  }
  /*
  for (pair<int, int> p : counter) {
    int key = p.first;
    int value = p.second;
    cout << key << ": " << value << endl;
  }
  */
  int64_t count = 0;
  rep (i, N) {
    if (counter.count(i + A[i]))
      count = count + counter[i + A[i]];
  }
  cout << count << endl;
}
