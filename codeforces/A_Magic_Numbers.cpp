#include <bits/stdc++.h>
using namespace std;

int main()
{

  string st;
  cin >> st;
  while (!st.empty())
  {
    if (st.substr(0, 3) == "144")
    {
      st = st.substr(3);
    }
    else if (st.substr(0, 2) == "14")
    {
      st = st.substr(2);
    }
    else if (st.substr(0, 1) == "1")
    {
      st = st.substr(1);
    }
    else
    {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
  return 0;
}