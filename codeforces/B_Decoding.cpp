#include <bits/stdc++.h>
using namespace std;

int main()
{

  int len;
  string st;
  cin >> len >> st;
  vector<char> v;
  while (len != 0)
  {
    if (len % 2 == 1)
    {
      v.push_back(st[0]);
    }
    else
    {
      v.insert(v.begin(), st[0]);
    }
    st.erase(0, 1);
    len = st.length();
  }

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i];
  }
  return 0;
}