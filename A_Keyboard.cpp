#include <bits/stdc++.h>
using namespace std;

int main()
{

  string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";
  char dir;
  cin >> dir;
  int k = 0;
  if (dir == 'R')
  {
    k = -1;
  }
  else
    k = 1;

  string st;
  cin >> st;
  for (int i = 0; i < st.size(); i++)
  {
    for (int j = 0; j < keys.size(); j++)
    {
      if (st[i] == keys[j])
      {
        st[i] = keys[j + k];
        break;
      }
    }
  }
  cout << st << endl;
  return 0;
}