#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 99))
    exit(1);

  int for_num = 0;
  rep (i, N) {
    string s;
    cin >> s;
    if ((s != "For") && (s != "Against"))
      exit(1);
    if (s == "For")
      for_num ++;
  }
  
  if (for_num > N / 2)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
