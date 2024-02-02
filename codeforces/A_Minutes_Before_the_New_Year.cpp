#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;
  while (tt--)
  {
    int hr, min;
    cin >> hr >> min;
    int day = 24 * 60;
    int time = hr * 60 + min;
    cout << day - time << endl;
  }

  return 0;
}