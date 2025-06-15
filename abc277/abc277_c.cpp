#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int recursive_search(int max, vector<int> P, vector<int> A, vector<int> B) {
  int present_floor = P.at(P.size() - 1)
  rep(i, A.size()) {
    if (present_floor == A.at(i)) {
      bool flag = true;
      rep(j, P.size()) {
	if (P.at(j) == B.at(i)) {
	  flag = false;
	  break;
	}
      }
      if (flag == true) {
	P.push_back(B.at(i));
	recursive_search(P, A, B);
      }
    } else if (present_floor == B.at(i)) {
      bool flag = true;
      rep(j, P.size()) {
	if (P.at(j) == A.at(i)) {
	  flag = false;
	  break;
	}
      }
      if (flag == true) {
	P.push_back(A.at(i));
	recursive_search(P, A, B);
      }
    }
  }
  
  
}

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 2 * 1e5))
    exit(1);
  vector<int> A(N), B(N);
  rep(i, N) {
    int a, b;
    cin >> a >> b;
    if ((a < 1) || (a > 1e9))
      exit(1);
    if ((b < 1) || (b > 1e9))
      exit(1);
    if (a == b)
      exit(1);
    if (a < b) {
      A.at(i) = a;
      B.at(i) = b;
    } else {
      A.at(i) = b;
      B.at(i) = a;
    }
  }

  vector<int> P = {1, 1};
  max_floor = recursive_search(P, A, B);
  cout << max_floor << endl;
  
  return 0;
}

