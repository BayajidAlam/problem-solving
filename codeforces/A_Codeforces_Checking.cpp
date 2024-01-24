#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;
  while (tt--)
  {
    char c;
    cin >> c;
    string s = "codeforces";
    if (find(s.begin(), s.end(), c) != s.end())
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