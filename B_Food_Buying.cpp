#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int ans = n, div = 0;
    if (n < 10)
    {
      cout << n << endl;
      continue;
    }
    else
    {
      while (n >= 10)
      {
        div = n / 10;
        n = n % 10;
        n += div;
        ans += div;
      }
      cout << ans << endl;
    }
  }

  return 0;
}