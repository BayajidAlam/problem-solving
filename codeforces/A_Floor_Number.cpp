#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;
  while (tt--)
  {
    int n, x;
    cin >> n >> x;
    int floor = 1;
    n = n - 2;
    while (n > 0)
    {
      n -= x;
      floor++;
    }
    cout << floor << endl;
  }

  return 0;
}