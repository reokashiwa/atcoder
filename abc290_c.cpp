#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep (i, N) {
    int a;
    cin >> a;
    A[i] = a;
  }
  sort(A.begin(), A.end());
  vector<int> B;
  int num = 0;
  rep (i, N) {
    if (A[i] == num) {
      if (K > 0) {
	B.push_back(num);
	num++;
	K--;
      }
    }
  }
  cout << B.size() << endl;
}
