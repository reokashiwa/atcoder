#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;

  rep(i, 9) {
    int a = (i + 1) * 110000000;
    rep(j, 100) {
      int b = j * 100000;
      rep(k, 10) {
	int c = k * 11000; 
	rep(l, 10) {
	  int d = l * 101;
	  rep (m, 10) {
	    int e = m * 10;
	    N--;
	    if (N == 0) {
	      cout << a + b + c + d + e << endl;
	      return 0;
	    }
	  }
	}
      }
    }
  }
}
