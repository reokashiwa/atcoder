#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((M < 0) || (M > N * (N - 1) / 2))
    exit(1);
  vector<int> U(N), V(N);
  rep (i, M) {
    int u, v, tmp;
    cin >> u >> v;
    if ((u < 1) || (u > N))
      exit(1);
    if ((v < 1) || (v > N))
      exit(1);
    if (u == v)
      exit(1); //自己ループ
    if (u > v) {
      tmp = v;
      v = u;
      u = tmp;
    }
    rep (j, i) {
      if ((U[j] == u) && (V[j] == v))
	exit(1);
    }
    U[i] = u - 1;
    V[i] = v - 1;
  }

  vector<vector<int>> C(N);
  rep (i, N) {
    C[i].push_back(i);
  }

  rep (i, M) {
    bool src_exist_flag = false, dst_exist_flag = false;
    int src_exist_index = -1, dst_exist_index = -1;
    rep (j, N) {
      rep (k, C[j].size()) {
	if (C[j][k] == U[i]) {
	  src_exist_flag = true;
	  break;
	}
      }
      if (src_exist_flag == true) {
	src_exist_index = j;
	break;
      }
    }

    rep (j, N) {
      rep (k, C[j].size()) {
	if (C[j][k] == V[i]) {
	  dst_exist_flag = true;
	  break;
	}
      }
      if (dst_exist_flag == true) {
	dst_exist_index = j;
	break;
      }
    }

    if (src_exist_index != dst_exist_index) {
      rep (j, C[dst_exist_index].size()) {
	C[src_exist_index].push_back(C[dst_exist_index][C[dst_exist_index].size() - 1]);
	C[dst_exist_index].pop_back();
      }
    }
  }

  /*
  rep (i, N) {
    cout << i << "(" << C[i].size() << ")" << ": ";
    if (C[i].size() != 0) {
      rep (j, C[i].size() - 1) {
	cout << C[i][j] + 1 << ", ";
      }
      cout << C[i][C[i].size() - 1] + 1;
    }
    cout << endl;
  }
  */

  int ans = 0;
  rep (i, N) {
    if (C[i].size() != 0)
      ans++;
  }
  cout << ans << endl;
}
