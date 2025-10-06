#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  int i = S[0] - '0', j = S[2] - '0';
  if (j < 8)
    cout << i << "-" << j + 1 << endl;
  else if ((i < 8) && (j == 8))
    cout << i + 1 << "-" << 1 << endl;
  else if ((i == 8) && (j == 8))
    exit(1);
}
