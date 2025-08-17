#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 1) || (N > 5 * 10e5))
    exit(1);
  if ((M < 1) || (M > 2 * 10e5))
    exit(1);
  string S, T;
  cin >> S >> T;
  vector<int> U(N, 0);
  rep (i, M) {
    int l, r;
    cin >> l >> r;
    if ((l < 1) || (l > N))
      exit(1);
    if ((r < 1) || (r > N))
      exit(1);
    if (l > r)
      exit(1);
    /* LTEになる手続き
      rep (j, r - l + 1)
      U[l - 1 + j]++;
      愚直に[l-1, r-1]区間を++する必要はない。
      こうしてしまうと1手続きあたり最大N回の++が発生し、
      M手続きあるからO(M×N)となる。
    */
    /* 
       差分が発生する地点で差分量だけ記載すると、
       1手続きあたり++と--が1回発生し、
       M手続きあるからO(2M)=O(M)で済む。
       最後にその差分の累積和から実際の数字を算出する必要がある。
       この手続きは文字数分あるのでO(N)。
       ゆえに計算量はO(M+N)となる。
       cf) いもす法 https://imoz.jp/algorithms/imos_method.html
    */
    U[l - 1]++;
    U[r]--;
  }
  rep (i, N - 1)
    U[i + 1] = U[i + 1] + U[i];

  rep (i, N) {
    if (U[i] % 2 == 0)
      cout << S[i];
    else
      cout << T[i];
  }
  cout << endl;
}
