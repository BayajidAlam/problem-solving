#include <bits/stdc++.h>
using namespace std;

int main()
{

  int ln;
  cin >> ln;
  string st;
  cin >> st;

  set<char> output;
  for (int i = 0; i < ln; i++)
  {
    char c = tolower(st[i]);
    if (c >= 'a' && c <= 'z')
    {
      output.insert(c);
    }
  }
  if (output.size() == 26)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}