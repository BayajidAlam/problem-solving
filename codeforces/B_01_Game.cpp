#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    string st;
    cin >> st;
    int zero = 0, one = 0;
    for (auto i : st)
    {
      if (i == '0')
        zero++;
      else
        one++;
    }
    int ans = min(one, zero);
    if (ans % 2)
      cout << "DA" << endl;
    else
      cout << "NET" << endl;
  }

  return 0;
}