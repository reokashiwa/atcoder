#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  int score = 0;
  rep (i, N) {
    int a;
    cin >> a;
    A[i] = a;
  }
  rep (i, M) {
    int b;
    cin >> b;
    score = score + A[b - 1];
  }
  cout << score << endl;

}
