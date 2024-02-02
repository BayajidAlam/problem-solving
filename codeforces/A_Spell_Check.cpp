#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;
  while (tt--)
  {
    string s, given = "Timur";
    int n;
    cin >> n;
    cin >> s;
    sort(s.begin(), s.end());
    sort(given.begin(), given.end());
    if (s == given)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}