#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;
  while (tt--)
  {
    int k;
    cin >> k;
    int j = 0, res = 0, a = 1;
    while (j < k)
    {
      if (a % 3 != 0 && a % 10 != 3)
      {
        res = a;
        j++;
      }
      a++;
    }
    cout << res << endl;
  }

  return 0;
}