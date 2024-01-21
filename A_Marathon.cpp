#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tt;
  cin >> tt;
  while (tt--)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int res = 0;
    if (b > a)
    {
      res++;
    }
    if (c > a)
    {
      res++;
    }
    if (d > a)
    {
      res++;
    }
    cout << res << endl;
  }

  return 0;
}
