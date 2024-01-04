#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main()
{

  string st;
  cin >> st;
  if (!isupper(st[0]))
  {
    st[0] = toupper(st[0]);
  }
  cout << st << endl;
  return 0;
}