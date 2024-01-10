#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;
  long long a, b;
  while (tt--)
  {
    int div = 0, next_div = 0;
    cin >> a >> b;
    if (a % b == 0)
    {
      cout << 0 << endl;
      continue;
    }

    div = a / b;
    next_div = (div + 1) * b;
    cout << next_div - a << endl;
  }

  return 0;
}