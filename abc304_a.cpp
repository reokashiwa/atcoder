#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 100))
    exit(1);
  vector<string> name(N);
  vector<int> age(N);
  rep (i, N) {
    string s;
    int a;
    cin >> s >> a;
    if ((s.size() < 1) || (s.size() > 10))
      exit(1);
    if ((a < 0) || (a > 10e9))
      exit(1);
    name[i] = s;
    age[i] = a;
  }
  int min_age = 10e9;
  int index = 0;
  rep (i, N) {
    if (age[i] < min_age) {
      min_age = age[i];
      index = i;
    }
  }
  for (int i = index; i < N; i++) {
    cout << name[i] << endl;
  }
  rep (i, index) {
    cout << name[i] << endl;
  }
  return 0;
}
