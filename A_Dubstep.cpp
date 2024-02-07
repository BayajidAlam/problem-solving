#include <bits/stdc++.h>
using namespace std;

int main()
{

  string st;
  bool flag = 1;
  cin >> st;
  for (int i = 0; i < st.size(); i++)
  {
    if (st[i] == 'W' && st[i + 1] == 'U' && st[i + 2] == 'B')
    {
      i += 2;
      if (!flag)
      {
        cout << " ";
      }
      continue;
    }
    else
    {
      flag = 0;
      cout << st[i];
    }
  }
  return 0;
}