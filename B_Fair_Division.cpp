#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;

  while (tt--)
  {
    int n;
    cin >> n;

    int div = 0, sum = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      if (x == 1)
      {
        one++;
        sum++;
      }
      else
      {
        sum += 2;
      }
    }
    if (sum % 2 == 0)
    {
      div = sum / 2;
      if (div % 2 == 0)
      {
        cout << "YES" << endl;
      }
      else
      {
        if (one)
          cout << "YES" << endl;

        else
          cout << "NO" << endl;
      }
    }
    else
      cout << "NO" << endl;
  }

  return 0;
}