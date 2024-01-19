#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;

  int a, b; // 10 5
  while (tt--)
  {
    cin >> a >> b;
    if (b < a)
    {
      swap(a, b);
    }
    int sub = 0, sum = 0, div = 0, remainder = 0;
    sub = b - a; //5
    div = sub / 10; // 5 / 10 = 0
    remainder = sub % 10; // 5 % 10 = 5
    sum = div; // 0
    if (remainder > 0)
    {
      sum++; // 0 + 1 = 1;
    }
    cout << sum << endl;
  }

  return 0;
}