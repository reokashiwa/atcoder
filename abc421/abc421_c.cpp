#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 5 * 10e5))
    exit(1);
  string S;
  cin >> S;
  if (S.size() != 2 * N)
    exit(1);
  int a = 0, b = 0;
  rep(i, S.size()) {
    if (S[i] == 'A')
      a++;
    else if (S[i] == 'B')
      b++;
    else
      exit(1);
  }
  if ((a != N) || (b != N))
    exit(1);
  int num = 0;
  if (S[0] == 'A') {
    for (int i = 2; i < 2 * N; i=i+2) {
      if (S[i] != 'A') num++;
    }
  } else {
    for (int i = 2; i < 2 * N; i=i+2) {
      if (S[i] != 'B') num++;
    }
  }
  cout << num << endl;
}
