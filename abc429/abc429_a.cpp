#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 1) || (N > 10))
    exit(1);
  if ((M < 1) || (M > 10))
    exit(1);
  rep (i, N) {
    if (i + 1 <= M)
      cout << "OK";
    else
      cout << "Too Many Requests";
    cout << endl;
  }
}
