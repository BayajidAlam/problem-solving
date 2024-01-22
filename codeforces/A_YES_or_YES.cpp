#include <bits/stdc++.h>
#include <cstring>
#include <strings.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;
  while (tt--)
  {
    string s;
    cin >> s;

    if (strcasecmp(s.c_str(), "YES") == 0)
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