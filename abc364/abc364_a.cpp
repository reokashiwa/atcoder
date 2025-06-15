#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  bool sweet_flag = false;
  rep (i, N) {
    string S;
    cin >> S;
    if (S == "sweet") {
      if (sweet_flag)
	if (i == N - 1) {
	  cout << "Yes";
	  return 0;
	} else {
	  cout << "No";
	  return 0;
	}
	  
      else
	sweet_flag = true;
    } else if (S == "salty")
      sweet_flag = false;
  }
  cout << "Yes";
}
