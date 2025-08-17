#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  int s = S.size();
  if ((s < 1) || (s > 10))
    exit(1);
  if (S == "red")
    cout << "SSS";
  else if (S == "blue")
    cout << "FFF";
  else if (S == "green")
    cout << "MMM";
  else
    cout << "Unknown";
  cout << endl;
}
