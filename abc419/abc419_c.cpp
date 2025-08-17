#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  vector<pair<int, int>> V;
  int r_min = 10e9, r_max = 0;
  int c_min = 10e9, c_max = 0;
  rep (i, N) {
    int r, c;
    cin >> r >> c;
    if ((r < 1) || (r > 10e9))
      exit(1);
    if ((c < 1) || (c > 10e9))
      exit(1);
    V.push_back(make_pair(r, c));
    r_min = min(r_min, r);
    r_max = max(r_max, r);
    c_min = min(c_min, c);
    c_max = max(c_max, c);
  }
  /*
  cout << "(" << r_min << ", " << r_max << ")" << endl;
  cout << "(" << c_min << ", " << c_max << ")" << endl;
  */
  int r_mid = (r_min + r_max) / 2;
  int c_mid = (c_min + c_max) / 2;
  // cout << "(" << r_mid << ", " << c_mid << ")" << endl;
  int max_hops = 0;
  rep (i, N) {
    int f = V[i].first;
    int s = V[i].second;
    if (max_hops < max(f - r_mid, s - c_mid))
      max_hops = max(f - r_mid, s - c_mid);
  }
  cout << max_hops << endl;
}
