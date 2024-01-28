#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;
  while (tt--)
  {
    string s;
    cin >> s;
    int n = s.length();
    if (n % 2 == 0 && s.substr(0, n / 2) == s.substr(n / 2, n / 2))
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}