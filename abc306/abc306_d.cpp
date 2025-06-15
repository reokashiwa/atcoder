#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 3 * 10e5))
    exit(1);
  vector<bool> X(N);
  vector<int> Y(N);
  rep (i, N) {
    int x;
    int y;
    cin >> x >> y;
    if ((x != 0) && (x != 1))
      exit(1);
    if ((y < -1 * 10e9) || (y > 10e9))
      exit(1);
    if (x == 0)
      X[i] == false;
    else
      X[i] == true;
  }
  long long point = 0;
  vector<int> score_list;  
  rep (i, N) {
    if (X[i] == 1) {
      score_list.push_back(Y[i]);
    } else {
      point = point + max(score_list) + Y[i];
      score_list = {};
    }
  }
  cout << point << endl;
}
