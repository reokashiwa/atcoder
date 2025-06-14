#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  if (S.size() != 3)
    exit(1);
  if (S == "ACE" || S == "BDF" || S == "CEG" || S == "DFA" || S == "EGB"
      || S == "FAC" || S == "GBD")
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
