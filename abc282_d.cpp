#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool check_exist_vertex (int i, int M, vector<int> u(M), vector<int> v(M), u_tmp, v_tmp) {
  rep(j, i) {
    if ((u[j] == u_tmp) && (v[j] == v_tmp))
      return true;
  }
  return false;
}

bool check_biparite_graph (int N, int M, vector<int> u(M), vector<int> v(M)) {
  vector<char> c(N, '');
  bool flag = true;
  rep(i, M) {
    if (c[u[i]] == '') {
      if ((c[v[i]] == '') || c[v[i]] == 'B')
	c[u[i]] = 'W';
      else if (c[v[i]] == 'W')
	c[u[i]] = 'B';
    } else if (c[u[i]] == 'W') {
      if (c[v[i]] == '')
	c[v[i]] = 'B';
      else if (c[v[i]] == 'W') {
	flag = false;
	break;
      }
    } else if (c[u[i]] == 'B') {
      if (c[v[i]] == '')
	c[v[i]] = 'W';
      else if (c[v[i]] == 'B') {
	flag = false;
	break;
      }
    }
  }
  return flag;
}

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 2) || (N > 2 * 10e5))
    exit(1);
  int min = 2 * 10e5;
  if ((N * (N - 1) / 2) < min)
    min = N * (N - 1) / 2;
  if ((M < 0) || (M > min))
    exit(1);

  vector<int> u(M);
  vector<int> v(M);
  rep(i, M) {
    int u_tmp, v_tmp, tmp;
    cin >> u_tmp >> v_tmp;
    if ((u_tmp < 1) || (u_tmp > N))
      exit(1);
    if ((v_tmp < 1) || (v_tmp > N))
      exit(1);
    if (u_tmp == v_tmp)
      exit(1);
    if (u_tmp > v_tmp) {
      tmp = v_tmp;
      v_tmp = u_tmp;
      u_tmp = tmp;
    }
    if (check_exist_vertex(i, M, u, v, u_tmp, v_tmp) == true)
      exit(1);
    
    u[i] = u_tmp;
    v[i] = v_tmp;
  }

  int num = 0;
  rep(i, N - 1) {
    rep(j, N - 1 - j) {
      int u_tmp = i, v_tmp = i + j + 1;
      if (check_exist_vertex (M, M, u, v, u_tmp, v_tmp) == true)
	continue;
      u.push_back(u_tmp);
      v.push_back(v_tmp);
      if (check_biparite_graph (N, M, u, v) == true)
	num++;
    }
  }

}


