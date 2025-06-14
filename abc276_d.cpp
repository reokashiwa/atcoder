#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 50))
    exit(1);
  int X;
  cin >> X;
  if ((X < 1) || (X > 10e4))
    exit(1);
  vector<vector<int>> AB(N, vector<int>(2));
  int total = 0;
  rep (i, N) {
    int a, b;
    cin >> a >> b;
    if ((a < 1) || (a > 100))
      exit(1);
    if ((b < 1) || (b > 50))
      exit(1);
    AB[i][0] = a;
    AB[i][1] = b;
    total = total + a * b;
  }

  sort(AB.begin(), AB.end());
  /*
  rep (i, N) {
    cout << AB[i][0] << ", " << AB[i][1] << endl;
  }
  */
  int res = total - X;
  if (res < 0) {
    cout << "No" << endl;
  } else if (res == 0) {
    cout << "Yes" << endl;
  } else {
    for (int i = N - 1; i 
  }
  
}
