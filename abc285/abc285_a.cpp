#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int a, b;
  cin >> a >> b;
  if ((a < 1) || (a > 15))
    exit(1);
  if ((b < 1) || (b > 15))
    exit(1);

  int tmp;
  if (a > b) {
    tmp = a;
    a = b;
    b = tmp;
  }
  --a;
  --b;
  
  vector<vector<int>> topology = {
    {1, 2}, // 0
    {3, 4}, // 1
    {5, 6}, // 2
    {7, 8}, // 3
    {9, 10},  // 4
    {11, 12}, // 5
    {13, 14}, // 6
    {}, // 7
    {}, // 8
    {}, // 9
    {}, // 10
    {}, // 11
    {}, // 12
    {}, // 13
    {}, // 14
    {}, // 15
  };

  rep (i, topology[a].size()) {
    if (topology[a][i] == b) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
