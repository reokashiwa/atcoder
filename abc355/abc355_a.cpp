#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int A, B;
  cin >> A >> B;
  if ((A < 1) || (A > 3))
    exit(1);
  if ((B < 1) || (B > 3))
    exit(1);
  set<int> C;
  C.insert(1);
  C.insert(2);
  C.insert(3);
  
  if (C.count(A))
    C.erase(A);
  if (C.count(B))
    C.erase(B);

  if (C.size() == 1)
    cout << *begin(C) << endl;
  else
    cout << -1 << endl;

  return 0;
}
