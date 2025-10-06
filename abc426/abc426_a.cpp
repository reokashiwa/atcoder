#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string X, Y;
  cin >> X >> Y;

  if ((X != "Ocelot") && (X != "Serval") && (X != "Lynx"))
    exit(1);
  if ((Y != "Ocelot") && (Y != "Serval") && (Y != "Lynx"))
    exit(1);

  int x, y;
  if (X == "Ocelot")
    x = 1;
  if (Y == "Ocelot")
    y = 1;
  if (X == "Serval")
    x = 2;
  if (Y == "Serval")
    y = 2;
  if (X == "Lynx")
    x = 3;
  if (Y == "Lynx")
    y = 3;

  if (x >= y)
    cout << "Yes";
  else
    cout << "No";
  cout << endl;
}
