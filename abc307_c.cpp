#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int h, w;
  cin >> h >> w;
  if ((h < 1) || (h > 10))
    exit(1);
  if ((w < 1) || (w > 10))
    exit(1);
  vector<string> A(h);
  rep (i, h) {
    string a;
    cin >> a;
    if (a.size() != w)
      exit(1);
    if (j, w) {
      if ((a[j] != '.') && (a[j] != '#'))
	exit(1);
    }
    A[i] = a;
  }

  cin >> h >> w;
  if ((h < 1) || (h > 10))
    exit(1);
  if ((w < 1) || (w > 10))
    exit(1);
  vector<string> B(h);
  rep (i, h) {
    string b;
    cin >> b;
    if (b.size() != w)
      exit(1);
    if (j, w) {
      if ((b[j] != '.') && (b[j] != '#'))
	exit(1);
    }
    B[i] = a;
  }

  cin >> h >> w;
  if ((h < 1) || (h > 10))
    exit(1);
  if ((w < 1) || (w > 10))
    exit(1);
  vector<string> X(h);
  rep (i, h) {
    string x;
    cin >> x;
    if (x.size() != w)
      exit(1);
    if (j, w) {
      if ((x[j] != '.') && (x[j] != '#'))
	exit(1);
    }
    X[i] = a;
  }
  
}
